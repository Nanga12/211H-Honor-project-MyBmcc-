#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "signupdialog.h"
MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    QPixmap background(":/image/logo.png");
    ui->logo->setPixmap(background);
    QPixmap wallpaper(":/image/wallpaper.png");
    ui->Backgroundimage->setPixmap(wallpaper);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_startedbutn_clicked()
{
    hide();
    SignupDialog = new class SignupDialog(this);
    SignupDialog->show();
}

