#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

  //  QString sn;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_Principal_Num1_clicked()
{
  AsignarValor(1);
  //ui->lcdNumber->display(sn);
  //n=sn.toInt();
}

void MainWindow::on_btn_Principal_Num2_clicked()
{
    AsignarValor(2);
    qDebug()<<"Selec 1";
}

void MainWindow::on_btn_Principal_Num3_clicked()
{
     AsignarValor(3);
}

void MainWindow::on_btn_Principal_Num4_clicked()
{
     AsignarValor(4);
}

void MainWindow::on_btn_Principal_Num5_clicked()
{
     AsignarValor(5);
}

void MainWindow::on_btn_Principal_Num6_clicked()
{
    AsignarValor(6);
}

void MainWindow::on_pushButton_7_clicked()
{
     AsignarValor(7);
}

void MainWindow::on_pushButton_8_clicked()
{
     AsignarValor(8);
}

void MainWindow::on_pushButton_4_clicked()
{
     AsignarValor(9);
}

void MainWindow::on_btn_Principal_Num0_clicked()
{
    AsignarValor(10);
}

void MainWindow::on_pushButton_clicked()
{
     AsignarValor(11);
}

void MainWindow::AsignarValor(int val)
{
    switch (val) {
                  case 1:  ui->lcdNumber->display("1");
                         break;
                  case 2:  ui->lcdNumber->display("2");
                         break;
                  case 3:  ui->lcdNumber->display("3");
                         break;
                  case 4:  ui->lcdNumber->display("4");
                         break;
                  case 5:  ui->lcdNumber->display("5");
                         break;
                  case 6:  ui->lcdNumber->display("6");
                         break;
                  case 7:  ui->lcdNumber->display("7");
                         break;
                  case 8:  ui->lcdNumber->display("8");
                         break;
                  case 9:  ui->lcdNumber->display("9");
                         break;
                 case 10:  ui->lcdNumber->display("0");
                         break;
                 case 11:  ui->lcdNumber->display(".");
                         break;
    default:
        break;
    }

}
