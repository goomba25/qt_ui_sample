#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
private:
    QWidget *central_widget_;
    QVBoxLayout *full_layout_;
    QLineEdit *line_edit_;
    QPushButton *button_;
};

#endif // MAINWINDOW_H
