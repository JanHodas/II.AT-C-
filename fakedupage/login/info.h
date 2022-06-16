#ifndef INFO_H
#define INFO_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class Info;
}

class Info : public QDialog
{
    Q_OBJECT

public:

    explicit Info(QWidget *parent = nullptr);
    ~Info();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_Edit_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_load_table_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::Info *ui;
};

#endif // INFO_H
