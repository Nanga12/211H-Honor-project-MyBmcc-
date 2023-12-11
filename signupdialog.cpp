#include "signupdialog.h"
#include "ui_signupdialog.h"
#include <QPixmap>
#include "student.h"


SignupDialog::SignupDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignupDialog)
{
    ui->setupUi(this);
    QPixmap background2(":/image/logo.png");
    ui->logo2->setPixmap(background2);
    QPixmap wallpaper2(":/image/wallpaper.png");
    ui->background2->setPixmap(wallpaper2);

}


SignupDialog::~SignupDialog()
{
    delete ui;
}

void SignupDialog::on_SignUp_clicked()
{
    hide();
    Student = new class Student(this);
    Student->show();
}


void SignupDialog::on_Fnametxt_textEdited(const QString &arg1)
{

}

