#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QHash> // 提供 qHash
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // 连接按钮的点击信号到槽函数
    connect(ui->pushButton0, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    connect(ui->pushButton1, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    connect(ui->pushButton2, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    connect(ui->pushButton3, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    connect(ui->pushButton4, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    connect(ui->pushButton5, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    connect(ui->pushButton6, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    connect(ui->pushButton7, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    connect(ui->pushButton8, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    connect(ui->pushButton9, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    // connect(ui->pushButton_add, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    // connect(ui->pushButton_mult, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    // connect(ui->pushButton_div, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    // connect(ui->pushButton_point, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    // connect(ui->pushButton_result, &QPushButton::clicked, this, &MainWindow::onButtonClick);
    // connect(ui->pushButton_sub, &QPushButton::clicked, this, &MainWindow::onButtonClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::IoTextSet()
{
    QTextCursor cursor = ui->ioTestEdit->textCursor();
    ui->ioTestEdit->clear();
    // 设置右对齐
    QTextBlockFormat blockFormat;
    blockFormat.setAlignment(Qt::AlignRight);
    cursor.mergeBlockFormat(blockFormat);  // 应用右对齐

    // 将光标定位到文本框的末尾
    cursor.movePosition(QTextCursor::End);

    // 如果光标已经在行尾，可以直接追加文本
    ui->ioTestEdit->setTextCursor(cursor);
}

void MainWindow::onButtonClick()
{
    if(m_numCount == 1)
    {
        IoTextSet();
    }
    if(m_numCount > 16)
    {
        return;
    }
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    if (!button) return;

    QString buttonText = button->text();

    // 使用哈希值作为 switch 条件
    switch (buttonText[0].unicode())
    {
    case '0':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;
    case '1':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;

    case '2':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;

    case '3':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;
    case '4':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;
    case '5':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;

    case '6':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;

    case '7':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;
    case '8':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;

    case '9':
        ui->ioTestEdit->insertPlainText(buttonText);
        break;
    // case '+':
    //     ui->ioTestEdit->insertPlainText(buttonText);
    //     break;

    // case '-':
    //     ui->ioTestEdit->insertPlainText(buttonText);
    //     break;

    // case '*':
    //     ui->ioTestEdit->insertPlainText(buttonText);
    //     break;

    // case '/':
    //     ui->ioTestEdit->insertPlainText(buttonText);
    //     break;
    // case '=':
    //     ui->ioTestEdit->insertPlainText(buttonText);
    //     break;
    // case '.':
    //     ui->ioTestEdit->insertPlainText(buttonText);
    //     break;
    default:
        ui->ioTestEdit->append("Unknown button clicked");
        break;
    }
    m_numCount++;
}
