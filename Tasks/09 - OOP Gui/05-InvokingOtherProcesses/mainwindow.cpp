#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QProcess>
#include <QClipboard>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::pushButtonClicked);
    connect(ui->actionCopy_Result, &QAction::triggered, this, &MainWindow::copyResult);

    //Line Edit Events
    //Connect you signals and slots here
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushButtonClicked()
{
    QProcess process;
#ifdef Q_OS_WINDOWS
    QString program = "where.exe";
#else
    QString program = "which";
#endif
    QString app = ui->lineEdit->text();
    QStringList arguments = {app};
    process.start(program, arguments);
    process.waitForStarted();
    process.waitForFinished();
    QString output = process.readAllStandardOutput();
    QString error = process.readAllStandardError();

    //Update UI
    ui->label->setText(output);
    ui->label_2->setText(error);
    if (!output.isEmpty()) {
        this->filePath = output;
        ui->actionCopy_Result->setEnabled(true);
    } else {
        ui->actionCopy_Result->setEnabled(false);
    }
}


void MainWindow::copyResult()
{
    QApplication::clipboard()->setText(this->filePath);
}


