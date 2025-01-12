#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    loadAdminTables();
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::loadAdminTables()
{
    qDebug() << "Username in UserWindow: admin";
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM users");
    if (model->lastError().isValid()) {
        QMessageBox::critical(this, "Database Error", model->lastError().text());
        return;
    }
    ui->tableView->setModel(model);
}
