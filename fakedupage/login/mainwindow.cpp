#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix("K:/fakedupage/login/fakedupage2.jpg");
    ui->label_image->setPixmap(pix);


    if(!connOpen())
        ui->label->setText("failed");
    else
        ui->label->setText("connected");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username,password;
    username=ui->lineEdit_username->text();
    password=ui->lineEdit_2_Password->text();

    if(!connOpen()){
        qDebug()<<"Failed to open adatabase";
        return;
    }

    connOpen();
    QSqlQuery qry;
    qry.prepare("select * from login where username='"+username +"'and password='"+password +"'");

    if(qry.exec())
    {
        int count = 0;
        while (qry.next())
        {
            count++;
        }
        if(count==1){
            ui->label->setText("username and password is corect");
            connClose();
            this->hide();
            Info info;
            info.setModal(true);
            info.exec();
        }
        if(count>1)
            ui->label->setText("duplicate username and password is corect");
        if(count<1)
            ui->label->setText("incorrect username and password is corect");

    }
}


/*void MainWindow::on_pushButton_2_clicked()
{
    QString username,password;
    username=ui->lineEdit_usename_2->text();
    password=ui->lineEdit_Password_2->text();

    if(!mydb.isOpen()){
        qDebug()<<"Failed to open database";
        return;
    }

    QSqlQuery qry;
    if(qry.exec("select * from login where username='"+username+"' and password='"+password+"'")){
        int count=0;
        while(qry.next()){
            count++;
        }
        if(count==1){
            ui->label_6->setText("username and password is correct");
            this->hide();
            ziak ziak;
            ziak.setModal(true);
            ziak.exec();
        }
        if(count>1)
            ui->label_6->setText("Duplicate username and password");
        if(count<1)
            ui->label_6->setText("username and password is not correct");
    }

}*/

