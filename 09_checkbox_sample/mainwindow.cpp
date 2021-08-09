#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    check_box_[0] = new QCheckBox("check box 1");
    check_box_[0]->setChecked(true);

    check_box_[1] = new QCheckBox;
    check_box_[1]->setText("check box 2");

    check_box_[2] = new QCheckBox("check box 3");

    full_layout_ = new QGridLayout;
    full_layout_->addWidget(check_box_[0], 0,0);
    full_layout_->addWidget(check_box_[1], 1,0);
    full_layout_->addWidget(check_box_[2], 2,0);

    central_widget_ = new QWidget;

    central_widget_->setLayout(full_layout_);
    this->setCentralWidget(central_widget_);
}
