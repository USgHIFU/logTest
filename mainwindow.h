#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLoggingCategory>

Q_DECLARE_LOGGING_CATEGORY(Button_Start)
Q_DECLARE_LOGGING_CATEGORY(Button_Stop)

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void btnStartClick();
    void btnStopClick();

private:
    QPushButton* m_btnStart, *m_btnStop;
};

#endif // MAINWINDOW_H
