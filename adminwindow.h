#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QMessageBox>
#include <QtSql/QtSql>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

    void loadAdminTables();

private:
    Ui::AdminWindow *ui;
};

#endif // ADMINWINDOW_H
