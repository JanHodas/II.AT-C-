/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QPushButton *pushButton;
    QLabel *label_sec_status;
    QWidget *layoutWidget;
    QFormLayout *formLayout_4;
    QLabel *label;
    QLineEdit *txt_name;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLineEdit *txt_age;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *txt_clas;
    QWidget *layoutWidget3;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *txt_marks;
    QPushButton *pushButton_Edit;
    QPushButton *pushButton_delete;
    QTableView *tableView;
    QPushButton *pushButton_load_table;
    QLabel *label_5;
    QLabel *label_image2;

    void setupUi(QDialog *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QString::fromUtf8("Info"));
        Info->resize(899, 535);
        Info->setStyleSheet(QString::fromUtf8(""));
        pushButton = new QPushButton(Info);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 380, 91, 41));
        label_sec_status = new QLabel(Info);
        label_sec_status->setObjectName(QString::fromUtf8("label_sec_status"));
        label_sec_status->setGeometry(QRect(0, 490, 171, 61));
        layoutWidget = new QWidget(Info);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 170, 251, 41));
        formLayout_4 = new QFormLayout(layoutWidget);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label);

        txt_name = new QLineEdit(layoutWidget);
        txt_name->setObjectName(QString::fromUtf8("txt_name"));
        sizePolicy.setHeightForWidth(txt_name->sizePolicy().hasHeightForWidth());
        txt_name->setSizePolicy(sizePolicy);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, txt_name);

        layoutWidget1 = new QWidget(Info);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 220, 251, 41));
        formLayout_3 = new QFormLayout(layoutWidget1);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        txt_age = new QLineEdit(layoutWidget1);
        txt_age->setObjectName(QString::fromUtf8("txt_age"));
        sizePolicy.setHeightForWidth(txt_age->sizePolicy().hasHeightForWidth());
        txt_age->setSizePolicy(sizePolicy);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txt_age);

        layoutWidget2 = new QWidget(Info);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 270, 251, 41));
        formLayout_2 = new QFormLayout(layoutWidget2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        txt_clas = new QLineEdit(layoutWidget2);
        txt_clas->setObjectName(QString::fromUtf8("txt_clas"));
        sizePolicy.setHeightForWidth(txt_clas->sizePolicy().hasHeightForWidth());
        txt_clas->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txt_clas);

        layoutWidget3 = new QWidget(Info);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 323, 251, 41));
        formLayout = new QFormLayout(layoutWidget3);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        txt_marks = new QLineEdit(layoutWidget3);
        txt_marks->setObjectName(QString::fromUtf8("txt_marks"));
        sizePolicy.setHeightForWidth(txt_marks->sizePolicy().hasHeightForWidth());
        txt_marks->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, txt_marks);

        pushButton_Edit = new QPushButton(Info);
        pushButton_Edit->setObjectName(QString::fromUtf8("pushButton_Edit"));
        pushButton_Edit->setGeometry(QRect(180, 380, 91, 41));
        pushButton_delete = new QPushButton(Info);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(100, 440, 101, 41));
        tableView = new QTableView(Info);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(410, 170, 431, 211));
        pushButton_load_table = new QPushButton(Info);
        pushButton_load_table->setObjectName(QString::fromUtf8("pushButton_load_table"));
        pushButton_load_table->setGeometry(QRect(570, 410, 121, 51));
        label_5 = new QLabel(Info);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 20, 291, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial Rounded MT Bold")});
        font1.setPointSize(30);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel#label_5\n"
"{\n"
"color: #3dc8af\n"
"}"));
        label_image2 = new QLabel(Info);
        label_image2->setObjectName(QString::fromUtf8("label_image2"));
        label_image2->setGeometry(QRect(20, 10, 141, 121));
        label_image2->setPixmap(QPixmap(QString::fromUtf8("fakedupage2.jpg")));

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QDialog *Info)
    {
        Info->setWindowTitle(QCoreApplication::translate("Info", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Info", "Ulo\305\276i\305\245", nullptr));
        label_sec_status->setText(QCoreApplication::translate("Info", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Info", "Meno   ", nullptr));
        label_2->setText(QCoreApplication::translate("Info", "Vek       ", nullptr));
        label_3->setText(QCoreApplication::translate("Info", "Trieda   ", nullptr));
        label_4->setText(QCoreApplication::translate("Info", "Zn\303\241mky", nullptr));
        pushButton_Edit->setText(QCoreApplication::translate("Info", "Upravi\305\245", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Info", "Vymaza\305\245", nullptr));
        pushButton_load_table->setText(QCoreApplication::translate("Info", "Load list", nullptr));
        label_5->setText(QCoreApplication::translate("Info", "FakeduPage", nullptr));
        label_image2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
