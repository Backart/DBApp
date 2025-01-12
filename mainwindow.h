#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPixmap>
#include <QtSql/QtSql>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onLoginClicked();    // Слот для кнопки "Login"
    void onCancelClicked();   // Слот для кнопки "Cancel"
    void onSignUp();

    void openUserInterface(int role_id, QString username);

private:
    Ui::MainWindow *ui;
    QSqlDatabase DBConnection;

};
#endif // MAINWINDOW_H
