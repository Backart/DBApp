#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialogregisterwindow.h"
#include "adminwindow.h"
#include "userwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Opening and connecting to the database

    /*//Підключення бази даних
    QFile file("BDSQLite/dbmanagment.sqlite");
    if (!file.exists()) {
        qDebug() << "Database file does not exist!";
        return;
    }*/

    DBConnection = QSqlDatabase::addDatabase("QSQLITE");
    DBConnection.setDatabaseName("C:/Users/monk/Documents/Projects/SQLite_db/BDSQLite/dbmanagment.sqlite");
    if (DBConnection.open()) {
        qDebug() << "Databased connect";
    } else {
        qDebug() << "Databased not connect: " << DBConnection.lastError().text();
    }
    // Loading and displaying the login icon image
    QPixmap pix ("C:/Users/monk/Documents/Projects/QT_Work/Education_QT/SqlLiteBDApp/img/login_icon.png");
    ui->label_picLogin->setPixmap(pix.scaled(250,250, Qt::KeepAspectRatio));
    // Connecting buttons to the corresponding slots
    connect(ui->pushButton_Login, &QPushButton::clicked, this, &MainWindow::onLoginClicked);
    connect(ui->pushButton_Cancel, &QPushButton::clicked, this, &MainWindow::onCancelClicked);
    connect(ui->pushButton_SignUp, &QPushButton::clicked, this, &MainWindow::onSignUp);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onLoginClicked()
{
    // Get user input from the username and password fields
    QString username = ui->lineEdit_UserName->text();
    QString password = ui->lineEdit_Password->text();
    // Check if either the username or password is empty
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Login Failed", "Please enter both username and password.");
        return;
    }
    // Prepare SQL query to verify username and password
    QSqlQuery query(DBConnection);
    query.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
    // Bind input values to the query to prevent SQL injection
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    // Execute the query and check if the user exists
    if (query.exec()) {
        if (query.next()) {
            // Якщо користувач знайдений, вивести успішне повідомлення
            QMessageBox::information(this, "Login", "Login successful!\nWelcome, " + username);



            // Подальша логіка для переходу в інший інтерфейс
            int role_id = query.value("role_id").toInt();
            openUserInterface(role_id, username);





        } else {
            // No user found with the provided credentials
            QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
        }
    } else {
        // Display error if query execution fails
        QMessageBox::critical(this, "Database Error", "Failed to execute query: " + query.lastError().text());
    }
}
void MainWindow::openUserInterface(int role_id, QString username) { // Додаємо параметр username
    if (role_id == 1) {
        AdminWindow *adminWindow = new AdminWindow();
        adminWindow->show();
    } else if (role_id == 2) {
        UserWindow *userWindow = new UserWindow(username); // Передаємо ім'я користувача
        userWindow->show();
    }

    this->close(); // Закриваємо головне вікно логіну
}


// Slot for the "Cancel" button
void MainWindow::onCancelClicked()
{
    // Clear input fields for username and password
    ui->lineEdit_UserName->clear();
    ui->lineEdit_Password->clear();
}

void MainWindow::onSignUp()
{
    // Створюємо об'єкт вікна реєстрації
    DialogRegisterWindow *registerWindow = new DialogRegisterWindow(this);

    // Відкриваємо вікно реєстрації
    registerWindow->exec();  // Викликає модальне вікно (не дає взаємодіяти з іншими вікнами, поки воно відкрите)
}
