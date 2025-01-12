/********************************************************************************
** Form generated from reading UI file 'dialogregisterwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGREGISTERWINDOW_H
#define UI_DIALOGREGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogRegisterWindow
{
public:
    QGroupBox *groupBox;
    QLabel *label_Registration;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_UserName;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_ConfirmPassword;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_UserName;
    QLabel *label_Password;
    QLabel *label_ConfirmPassword;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_Register;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *DialogRegisterWindow)
    {
        if (DialogRegisterWindow->objectName().isEmpty())
            DialogRegisterWindow->setObjectName("DialogRegisterWindow");
        DialogRegisterWindow->resize(400, 300);
        groupBox = new QGroupBox(DialogRegisterWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 381, 281));
        label_Registration = new QLabel(groupBox);
        label_Registration->setObjectName("label_Registration");
        label_Registration->setGeometry(QRect(140, 30, 101, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(15);
        font.setBold(true);
        label_Registration->setFont(font);
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(200, 90, 160, 84));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_UserName = new QLineEdit(verticalLayoutWidget);
        lineEdit_UserName->setObjectName("lineEdit_UserName");

        verticalLayout->addWidget(lineEdit_UserName);

        lineEdit_Password = new QLineEdit(verticalLayoutWidget);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEdit_Password);

        lineEdit_ConfirmPassword = new QLineEdit(verticalLayoutWidget);
        lineEdit_ConfirmPassword->setObjectName("lineEdit_ConfirmPassword");
        lineEdit_ConfirmPassword->setEchoMode(QLineEdit::EchoMode::Password);

        verticalLayout->addWidget(lineEdit_ConfirmPassword);

        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 90, 160, 80));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_UserName = new QLabel(verticalLayoutWidget_2);
        label_UserName->setObjectName("label_UserName");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setKerning(true);
        label_UserName->setFont(font1);

        verticalLayout_2->addWidget(label_UserName);

        label_Password = new QLabel(verticalLayoutWidget_2);
        label_Password->setObjectName("label_Password");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_Password->setFont(font2);

        verticalLayout_2->addWidget(label_Password);

        label_ConfirmPassword = new QLabel(verticalLayoutWidget_2);
        label_ConfirmPassword->setObjectName("label_ConfirmPassword");
        label_ConfirmPassword->setFont(font2);

        verticalLayout_2->addWidget(label_ConfirmPassword);

        verticalLayoutWidget_3 = new QWidget(groupBox);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(110, 190, 160, 80));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_Register = new QPushButton(verticalLayoutWidget_3);
        pushButton_Register->setObjectName("pushButton_Register");

        verticalLayout_3->addWidget(pushButton_Register);

        pushButton_Cancel = new QPushButton(verticalLayoutWidget_3);
        pushButton_Cancel->setObjectName("pushButton_Cancel");

        verticalLayout_3->addWidget(pushButton_Cancel);


        retranslateUi(DialogRegisterWindow);

        QMetaObject::connectSlotsByName(DialogRegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *DialogRegisterWindow)
    {
        DialogRegisterWindow->setWindowTitle(QCoreApplication::translate("DialogRegisterWindow", "Dialog", nullptr));
        groupBox->setTitle(QString());
        label_Registration->setText(QCoreApplication::translate("DialogRegisterWindow", "Registration", nullptr));
        label_UserName->setText(QCoreApplication::translate("DialogRegisterWindow", "User Name", nullptr));
        label_Password->setText(QCoreApplication::translate("DialogRegisterWindow", "Password", nullptr));
        label_ConfirmPassword->setText(QCoreApplication::translate("DialogRegisterWindow", "Confirm Password", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("DialogRegisterWindow", "Register", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("DialogRegisterWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRegisterWindow: public Ui_DialogRegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGREGISTERWINDOW_H
