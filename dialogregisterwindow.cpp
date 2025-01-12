#include "dialogregisterwindow.h"
#include "ui_dialogregisterwindow.h"

DialogRegisterWindow::DialogRegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DialogRegisterWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_Register, &QPushButton::clicked, this, &DialogRegisterWindow::onRegister);
    connect(ui->pushButton_Cancel, &QPushButton::clicked, this, &DialogRegisterWindow::onCancelClicked);

}

DialogRegisterWindow::~DialogRegisterWindow()
{
    delete ui;
}

void DialogRegisterWindow::onRegister() {
    // Отримуємо введені дані
    QString username = ui->lineEdit_UserName->text();
    QString password = ui->lineEdit_Password->text();
    QString confirmPassword = ui->lineEdit_ConfirmPassword->text(); // Поле для підтвердження пароля

    // Перевірка заповнення полів
    if (username.isEmpty() || password.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }



    if (username.length() < 3) {
        QMessageBox::warning(this, "Input Error", "Username must be at least 3 characters long.");
        return;
    }

    if (password.length() < 6) {
        QMessageBox::warning(this, "Input Error", "Password must be at least 6 characters long.");
        return;
    }

    QRegularExpression strongPasswordRegex("^(?=.*[A-Za-z])(?=.*\\d)(?=.*[@$!%*?&])[A-Za-z\\d@$!%*?&]{6,}$");
    if (!strongPasswordRegex.match(password).hasMatch()) {
        QMessageBox::warning(this, "Password Error", "Password must contain at least one letter, one number, and one special character.");
        return;
    }

    if (username.length() > 20) {
        QMessageBox::warning(this, "Input Error", "Username must not exceed 20 characters.");
        return;
    }

    QRegularExpression validUsernameRegex("^[A-Za-z0-9_]+$");
    if (!validUsernameRegex.match(username).hasMatch()) {
        QMessageBox::warning(this, "Input Error", "Username can only contain letters, numbers, and underscores.");
        return;
    }

    if (username == password) {
        QMessageBox::warning(this, "Input Error", "Username and password cannot be the same.");
        return;
    }

    QStringList forbiddenUsernames = {"admin", "root", "test"};
    if (forbiddenUsernames.contains(username, Qt::CaseInsensitive)) {
        QMessageBox::warning(this, "Input Error", "This username is not allowed.");
        return;
    }

    QRegularExpression repeatingCharRegex("(.)\\1{2,}");
    if (repeatingCharRegex.match(password).hasMatch()) {
        QMessageBox::warning(this, "Password Error", "Password cannot contain three or more repeating characters.");
        return;
    }

    if (!password.contains(QRegularExpression("[A-Z]"))) {
        QMessageBox::warning(this, "Password Error", "Password must contain at least one uppercase letter.");
        return;
    }

    static int failedAttempts = 0;
    if (failedAttempts >= 5) {
        QMessageBox::critical(this, "Blocked", "You have been temporarily blocked after too many failed attempts.");
        return;
    }
    // Якщо перевірки не пройдено, збільшуємо кількість спроб
    failedAttempts++;






    // Перевірка наявності пробілів у імені та паролях
    if (username.contains(' ') || password.contains(' ') || confirmPassword.contains(' ')) {
        QMessageBox::warning(this, "Input Error", "Username and passwords cannot contain spaces.");
        return;
    }

    // Перевірка, чи паролі співпадають
    if (password != confirmPassword) {
        QMessageBox::warning(this, "Password Error", "Passwords do not match.");
        return;
    }

    // Підключення до бази даних
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not open!");
        return;
    }

    // Перевірка унікальності імені користувача
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM users WHERE username = :username");
    checkQuery.bindValue(":username", username);

    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to check username: " + checkQuery.lastError().text());
        return;
    }

    checkQuery.next();
    int count = checkQuery.value(0).toInt();
    if (count > 0) {
        QMessageBox::warning(this, "Registration Error", "Username already exists.");
        return;
    }

    // role_id за замовчуванням 2 (звичайний користувач). Адмін може вручну встановити 1.
    int role_id = 2; // Роль за замовчуванням - звичайний користувач

    // Якщо поточний адміністратор хоче створити іншого адміністратора
    /*QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Assign Admin Role",
                                  "Do you want to assign this user as an admin?",
                                  QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        role_id = 1; // Роль адміністратора
    }*/

    // Підготовка SQL-запиту для додавання користувача
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password, role_id) VALUES (:username, :password, :role_id)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":role_id", role_id);

    // Виконання запиту
    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to register user: " + query.lastError().text());
        return;
    }

    QMessageBox::information(this, "Success", "User registered successfully!");

    // Закрити вікно після успішної реєстрації
    this->accept();
}

void DialogRegisterWindow::onCancelClicked()
{
    // Clear input fields for username and password
    ui->lineEdit_UserName->clear();
    ui->lineEdit_Password->clear();
}
