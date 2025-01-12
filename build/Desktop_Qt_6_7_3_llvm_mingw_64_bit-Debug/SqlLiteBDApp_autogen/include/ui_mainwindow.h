/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_UserName;
    QLabel *label_Password;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_UserName;
    QLineEdit *lineEdit_Password;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_SignUp;
    QLabel *label_picLogin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(605, 383);
        MainWindow->setTabShape(QTabWidget::TabShape::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(270, 10, 291, 311));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 30, 161, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(10, 80, 91, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_UserName = new QLabel(verticalLayoutWidget);
        label_UserName->setObjectName("label_UserName");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_UserName->setFont(font1);

        verticalLayout->addWidget(label_UserName);

        label_Password = new QLabel(verticalLayoutWidget);
        label_Password->setObjectName("label_Password");
        label_Password->setFont(font1);

        verticalLayout->addWidget(label_Password);

        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(110, 80, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_UserName = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_UserName->setObjectName("lineEdit_UserName");
        QFont font2;
        font2.setStrikeOut(false);
        lineEdit_UserName->setFont(font2);

        verticalLayout_2->addWidget(lineEdit_UserName);

        lineEdit_Password = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout_2->addWidget(lineEdit_Password);

        verticalLayoutWidget_3 = new QWidget(groupBox);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(70, 210, 171, 71));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_Login = new QPushButton(verticalLayoutWidget_3);
        pushButton_Login->setObjectName("pushButton_Login");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(11);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        pushButton_Login->setFont(font3);

        verticalLayout_3->addWidget(pushButton_Login);

        pushButton_Cancel = new QPushButton(verticalLayoutWidget_3);
        pushButton_Cancel->setObjectName("pushButton_Cancel");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setItalic(true);
        pushButton_Cancel->setFont(font4);

        verticalLayout_3->addWidget(pushButton_Cancel);

        pushButton_SignUp = new QPushButton(groupBox);
        pushButton_SignUp->setObjectName("pushButton_SignUp");
        pushButton_SignUp->setGeometry(QRect(220, 170, 61, 20));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Times New Roman")});
        font5.setBold(false);
        font5.setItalic(true);
        font5.setUnderline(true);
        pushButton_SignUp->setFont(font5);
        pushButton_SignUp->setCheckable(false);
        pushButton_SignUp->setAutoRepeat(false);
        label_picLogin = new QLabel(centralwidget);
        label_picLogin->setObjectName("label_picLogin");
        label_picLogin->setGeometry(QRect(10, 60, 221, 231));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 605, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", " Welcome to DB", nullptr));
        label_UserName->setText(QCoreApplication::translate("MainWindow", "User Name", nullptr));
        label_Password->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        pushButton_SignUp->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        label_picLogin->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
