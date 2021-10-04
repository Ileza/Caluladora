#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

  int n;
  QString valor;//Varible de boton seleccionado

private slots:
    void on_btn_Principal_Num1_clicked();

    void on_btn_Principal_Num2_clicked();

    void on_btn_Principal_Num3_clicked();

    void on_btn_Principal_Num4_clicked();

    void on_btn_Principal_Num5_clicked();

    void on_btn_Principal_Num6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_4_clicked();

    void on_btn_Principal_Num0_clicked();

    void on_pushButton_clicked();

   void AsignarValor(int val);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
