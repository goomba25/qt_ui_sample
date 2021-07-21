#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ButtonInit();
    LabelInit();
    VBoxLayoutInit();

    central_widget_ = new QWidget;

    this->setCentralWidget(central_widget_);
    central_widget_->setLayout(full_layout_);
}

void MainWindow::VBoxLayoutInit() {
    full_layout_ = new QVBoxLayout;

    full_layout_->addWidget(label_);
    for (int i = 0; i < 2; i++) {
        full_layout_->addWidget(button_[i]);
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
