#include "info.h"
#include "ui_info.h"
#include <QMessageBox>
Info::Info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);

    QPixmap pix("K:/fakedupage/login/fakedupage2.jpg");
    ui->label_image2->setPixmap(pix);

    MainWindow conn;
            if(!conn.connOpen())
                ui->label_sec_status->setText("failed");
            else
                ui->label_sec_status->setText("connected");
}

Info::~Info()
{
    delete ui;
}

void Info::on_pushButton_clicked()
{
    MainWindow conn;
    QString meno,vek,trieda,znamky;
    meno=ui->txt_name->text();
    vek=ui->txt_age->text();
    trieda=ui->txt_clas->text();
    znamky=ui->txt_marks->text();

    if(!conn.connOpen()){
        qDebug()<<"Failed to open adatabase";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("insert into login (name,age,clas,marks) values ('"+meno+"','"+vek+"','"+trieda+"','"+znamky+"')");

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Save"),tr("Data is saved"));
        conn.connClose();

    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}



void Info::on_pushButton_Edit_clicked()
{
    MainWindow conn;
    QString meno,vek,trieda,znamky;
    meno=ui->txt_name->text();
    vek=ui->txt_age->text();
    trieda=ui->txt_clas->text();
    znamky=ui->txt_marks->text();

    if(!conn.connOpen()){
        qDebug()<<"Failed to open adatabase";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("update login set name='"+meno+"',age='"+vek+"',clas='"+trieda+"',marks='"+znamky+"' where name='"+meno+"'");

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Edit"),tr("Updated"));
        conn.connClose();

    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}


void Info::on_pushButton_delete_clicked()
{
    MainWindow conn;
    QString name;
    name=ui->txt_name->text();
    //age=ui->txt_age->text();
    //clas=ui->txt_clas->text();
    //marks=ui->txt_marks->text();

    if(!conn.connOpen()){
        qDebug()<<"Failed to open adatabase";
        return;
    }

    conn.connOpen();
    QSqlQuery qry;
    qry.prepare("Delete from login where name=='"+name+"'");

    if(qry.exec())
    {
        QMessageBox::critical(this,tr("Delete"),tr("Deleted"));
        conn.connClose();

    }
    else{
        QMessageBox::critical(this,tr("error::"),qry.lastError().text());
    }
}


void Info::on_pushButton_load_table_clicked()
{
    MainWindow conn;
    QSqlQueryModel * modal = new QSqlQueryModel();

    conn.connOpen();
    QSqlQuery * qry = new QSqlQuery(conn.mydb);

    qry->prepare("select name,age,clas,marks from login");

    qry->exec();
    modal->setQuery(*qry);
    ui->tableView->setModel(modal);

    conn.connClose();

    qDebug() << (modal->rowCount());
}






