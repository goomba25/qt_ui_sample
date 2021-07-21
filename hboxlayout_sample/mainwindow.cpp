#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ButtonInit();
    LabelInit();
    HBoxLayoutInit();

    central_widget_ = new QWidget;

    this->setCentralWidget(central_widget_);
    central_widget_->setLayout(full_layout_);
}

void MainWindow::HBoxLayoutInit() {
    full_layout_ = new QHBoxLayout;

    //  1 <- Percentage of widgets in layout
    full_layout_->addWidget(label_, 1);
    for (int i = 0; i < 2; i++) {
        full_layout_->addWidget(button_[i], 1);
    }
}

void MainWindow::ButtonInit() {
    button_[0] = new QPushButton;
    button_[0]->setText("First Button");

    button_[1] = new QPushButton;
    button_[1]->setText("Second Button");
}

void MainWindow::LabelInit() {
    label_ = new QLabel;
    label_->setText("This is Label");
    label_->setAlignment(Qt::AlignCenter);
}
