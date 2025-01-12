#include "userwindow.h"
#include "ui_userwindow.h"

UserWindow::UserWindow(const QString &username, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UserWindow)
    , userUsername(username)
{
    ui->setupUi(this);

    loadUserOrders();
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::loadUserOrders()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM orders");  // Запит на всі дані з таблиці "orders"

    if (query.exec()) {
        QSqlQueryModel *model = new QSqlQueryModel();
        model->setQuery(std::move(query));  // Переміщення запиту замість копіювання
        ui->tableView->setModel(model);  // Встановлення моделі на таблицю в інтерфейсі
        qDebug() << "Orders data loaded successfully.";
    } else {
        qDebug() << "Error executing query:" << query.lastError().text();
    }
}

