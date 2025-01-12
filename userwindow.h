#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QMessageBox>
#include <QtSql/QtSql>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class UserWindow;
}

class UserWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserWindow(const QString &username, QWidget *parent = nullptr);
    ~UserWindow();

private:
    Ui::UserWindow *ui;
    QString userUsername;
    void loadUserOrders();
};

#endif // USERWINDOW_H
