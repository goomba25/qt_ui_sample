#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) 
  : QMainWindow(parent)
{
  label_ = new QLabel;
  label_->setText("This is central widget");
  label_->setAlignment(Qt::AlignCenter);
  this->setCentralWidget(label_);

  this->setWindowTitle("Title");
}