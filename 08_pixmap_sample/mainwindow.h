#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QLabel>
#include <QPixmap>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private:
    QWidget *central_widget_;
    QGridLayout *full_layout_;
    QLabel *label_;
};

#endif // MAINWINDOW_H