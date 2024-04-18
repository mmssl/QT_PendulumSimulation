#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>

static int DEFAULT_X_OFFS = 500;
static int DEFAULT_Y_OFFS = 302;
static int DEF_X_PEND_OFFS = 70;
static int DEF_Y_PEND_OFFS = 70;
static int DEF_X_INIT_PEND_OFFS = 468;
static int DEF_Y_INIT_PEND_OFFS = 234;
static float time_period = 0;
const float pi = 3.14;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *pEvent)
{
    int X = DEFAULT_X_OFFS;
    int Y = DEFAULT_Y_OFFS;

    QWidget::paintEvent(pEvent);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::red);
    painter.setBrush(QBrush(Qt::yellow));

    X = DEFAULT_X_OFFS;
    Y = DEFAULT_Y_OFFS;

    int XE = DEF_X_PEND_OFFS;
    int YE = DEF_Y_PEND_OFFS;
    int XI = DEF_X_INIT_PEND_OFFS;
    int YI = DEF_X_INIT_PEND_OFFS;

    painter.drawLine(490,60,510,60);
    painter.drawLine(500,60,X,Y+175);
    painter.drawEllipse(XI,YI,XE,YE);
}


void MainWindow::on_OK_button_clicked()
{
    QString lengthInf = ui->lineEdit_length->text();
    int length_pend = lengthInf.toInt();
    InitialDisplay(length_pend);
}


void MainWindow::on_RESET_button_clicked()
{
    DEFAULT_X_OFFS = 500;
    DEFAULT_Y_OFFS = 302;
    DEF_X_PEND_OFFS = 70;
    DEF_Y_PEND_OFFS = 70;
    DEF_X_INIT_PEND_OFFS = 468;
    DEF_Y_INIT_PEND_OFFS = 234;
    this->repaint();
}

void MainWindow::InitialDisplay (int strLength)
{
    if (strLength)
    {
        DEFAULT_Y_OFFS = strLength;
        int d = strLength - 60;
        DEF_Y_PEND_OFFS = DEF_Y_PEND_OFFS + d;
        this->repaint();
    }
    // ui->OK_button->close();
}

void MainWindow::display (int Strl)
{
    time_period = 2*pi*sqrt(Strl/9.8);
    float iPeriod = time_period;
    QString Period;
    Period.asprintf("%f", iPeriod);
    ui->label_Pendulum->setText(Period);
    float motion = time_period/4;
    float imotion = motion;
    QString Motion;
    Motion.asprintf("%f", imotion);
    ui->label_Pendulum->setText(Motion);

    for (int i = 0; i < motion; ++i)
    {
        QEventLoop loop;
        QTimer::singleShot(300, &loop, SLOT(quit()));
        loop.exec();
        DEFAULT_X_OFFS = DEFAULT_X_OFFS + 5;
        DEFAULT_X_OFFS = DEFAULT_X_OFFS - 2;
        DEF_X_INIT_PEND_OFFS = DEF_X_INIT_PEND_OFFS + 5;
        DEF_X_INIT_PEND_OFFS = DEF_X_INIT_PEND_OFFS - 2;
        DEF_X_PEND_OFFS = DEF_X_PEND_OFFS;
        DEF_Y_PEND_OFFS = DEF_Y_PEND_OFFS;
        this->repaint();
    }
    for (int i = 0; i < motion; ++i)
    {
        QEventLoop loop;
        QTimer::singleShot(300, &loop, SLOT(quit()));
        loop.exec();
        DEFAULT_X_OFFS = DEFAULT_X_OFFS - 5;
        DEFAULT_X_OFFS = DEFAULT_X_OFFS + 2;
        DEF_X_INIT_PEND_OFFS = DEF_X_INIT_PEND_OFFS - 5;
        DEF_X_INIT_PEND_OFFS = DEF_X_INIT_PEND_OFFS + 2;
        this->repaint();
    }
    for (int i = 0; i < motion; ++i)
    {
        QEventLoop loop;
        QTimer::singleShot(300, &loop, SLOT(quit()));
        loop.exec();
        DEFAULT_X_OFFS = DEFAULT_X_OFFS - 5;
        DEFAULT_X_OFFS = DEFAULT_X_OFFS - 2;
        DEF_X_INIT_PEND_OFFS = DEF_X_INIT_PEND_OFFS - 5;
        DEF_X_INIT_PEND_OFFS = DEF_X_INIT_PEND_OFFS - 2;
        this->repaint();
    }
    for (int i = 0; i < motion; ++i)
    {
        QEventLoop loop;
        QTimer::singleShot(300, &loop, SLOT(quit()));
        loop.exec();
        DEFAULT_X_OFFS = DEFAULT_X_OFFS + 5;
        DEFAULT_X_OFFS = DEFAULT_X_OFFS + 2;
        DEF_X_INIT_PEND_OFFS = DEF_X_INIT_PEND_OFFS + 5;
        DEF_X_INIT_PEND_OFFS = DEF_X_INIT_PEND_OFFS + 2;
        this->repaint();
    }


}

void MainWindow::on_actionStart_triggered()
{
    display(DEFAULT_Y_OFFS);
}


void MainWindow::on_actionStop_triggered()
{

}


void MainWindow::on_actionRestart_triggered()
{

}


