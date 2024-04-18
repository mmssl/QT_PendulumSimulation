#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QPalette>
#include <QDebug>
#include <math.h>
#include <string>
#include <stdio.h>
#include <QTimer>

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
    void InitialDisplay (int l);
    void display (int Strl);
protected:
    void paintEvent(QPaintEvent *);

private slots:
    void on_actionStart_triggered();

    void on_actionStop_triggered();

    void on_actionRestart_triggered();

    void on_OK_button_clicked();

    void on_RESET_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
