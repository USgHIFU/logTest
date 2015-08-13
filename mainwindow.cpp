#include "mainwindow.h"
#include <QHBoxLayout>

Q_LOGGING_CATEGORY(Button_Start,"Module Start")
Q_LOGGING_CATEGORY(Button_Stop,"Module Stop")

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setStyleSheet("QPushButton {background-color: yellow}");

    m_btnStart = new QPushButton(this);
    m_btnStart->setText("START");
//    m_btnStart->setStyleSheet("background-color: yellow");
    m_btnStop = new QPushButton(this);
    m_btnStop->setText("STOP");
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(m_btnStart);
    layout->addWidget(m_btnStop);

    QWidget* widget = new QWidget(this);
    widget->setLayout(layout);
    setCentralWidget(widget);

    connect(m_btnStart,SIGNAL(clicked(bool)),SLOT(btnStartClick()));
    connect(m_btnStop,SIGNAL(clicked(bool)),SLOT(btnStopClick()));
}

MainWindow::~MainWindow()
{

}

void MainWindow::btnStartClick()
{
    qCDebug(Button_Start()) << Button_Start().categoryName() << ": " << "Module Start works";
}

void MainWindow::btnStopClick()
{
    qCDebug(Button_Stop()) << Button_Stop().categoryName() << ": " << "Module Stop works";
}
