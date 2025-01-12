#ifndef DIALOGREGISTERWINDOW_H
#define DIALOGREGISTERWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QtSql/QtSql>
#include <QSqlError>
#include <QSqlQuery>

namespace Ui {
class DialogRegisterWindow;
}

class DialogRegisterWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DialogRegisterWindow(QWidget *parent = nullptr);
    ~DialogRegisterWindow();

private slots:
    void onRegister();
    void onCancelClicked();

private:
    Ui::DialogRegisterWindow *ui;
};

#endif // DIALOGREGISTERWINDOW_H
