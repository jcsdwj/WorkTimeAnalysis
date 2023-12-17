#include "operatewindow.h"
#include "ui_operatewindow.h"

OperateWindow::OperateWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::OperateWindow)
{
    ui->setupUi(this);
}

OperateWindow::~OperateWindow()
{
    delete ui;
}

void OperateWindow::on_chooseFileButton_clicked()
{

}

