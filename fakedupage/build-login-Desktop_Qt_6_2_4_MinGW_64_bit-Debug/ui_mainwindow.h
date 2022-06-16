/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_2_Password;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QLabel *label_image;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 550, 171, 31));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(200, 220, 391, 271));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 190, 151, 51));
        QFont font;
        font.setPointSize(16);
        pushButton->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 120, 371, 51));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(18);
        label_3->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit_2_Password = new QLineEdit(layoutWidget);
        lineEdit_2_Password->setObjectName(QString::fromUtf8("lineEdit_2_Password"));
        sizePolicy.setHeightForWidth(lineEdit_2_Password->sizePolicy().hasHeightForWidth());
        lineEdit_2_Password->setSizePolicy(sizePolicy);
        lineEdit_2_Password->setFont(font);
        lineEdit_2_Password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_2_Password);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 40, 371, 51));
        formLayout_2 = new QFormLayout(layoutWidget1);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_username = new QLineEdit(layoutWidget1);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        sizePolicy.setHeightForWidth(lineEdit_username->sizePolicy().hasHeightForWidth());
        lineEdit_username->setSizePolicy(sizePolicy);
        lineEdit_username->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_username);

        label_image = new QLabel(centralwidget);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(180, 40, 141, 121));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 50, 291, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font2.setPointSize(30);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("QLabel#label_4\n"
"{\n"
"color: #3dc8af\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "[+]Status", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Prihl\303\241si\305\245 sa", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Heslo", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Meno", nullptr));
        label_image->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "FakeduPage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
