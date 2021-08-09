#include "mainwindow.hpp"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    label_ = new QLabel;
    label_->setFixedSize(300,300);

    QPixmap pixmap("/home/hills/Downloads/image.png");

    label_->setPixmap(pixmap.scaled(label_->width(), label_->height(),
                                    Qt::KeepAspectRatio));

    full_layout_ = new QGridLayout;
    full_layout_->addWidget(label_);

    central_widget_ = new QWidget;
    this->setCentralWidget(central_widget_);
    central_widget_->setLayout(full_layout_);
}
