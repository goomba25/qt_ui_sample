#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    label_[0] = new QLabel("first label");
    label_[1] = new QLabel;
    label_[1]->setText("second label");
    label_[2] = new QLabel("third label");
    label_[2]->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    label_[3] = new QLabel("fourth label");
    label_[3]->setAlignment(Qt::AlignCenter);
    label_[4] = new QLabel("fifth label");
    label_[4]->setFixedHeight(100);

    full_layout_ = new QVBoxLayout;
    for (int i = 0; i < 5; i++) {
        full_layout_->addWidget(label_[i]);
    }
    full_layout_->setStretch(2,2);

    central_widget_ = new QWidget;

    central_widget_->setLayout(full_layout_);
    this->setCentralWidget(central_widget_);
}
