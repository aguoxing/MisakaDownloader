#include "downloaditem.h"
#include "ui_downloaditem.h"

DownloadItem::DownloadItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DownloadItem)
{
    ui->setupUi(this);

    // 设置按钮的初始状态为播放状态
    ui->playPauseButton->setProperty("playbackState", "playing");

    // 将播放图标设置为按钮的初始图标
    ui->playPauseButton->setIcon(QIcon(":/icon/play.svg"));

    // 创建两个QIcon对象，分别代表播放和暂停状态下的图标
    QIcon playIcon = QIcon(":/icon/play.svg");
    QIcon pauseIcon = QIcon(":/icon/pause.svg");

    // 连接按钮的clicked()信号到一个槽函数，用于切换播放暂停状态
    connect(ui->playPauseButton, &QToolButton::clicked, [=]() {
        QString state = ui->playPauseButton->property("playbackState").toString();
        if (state == "playing") {
            ui->playPauseButton->setIcon(pauseIcon);
            ui->playPauseButton->setProperty("playbackState", "paused");
            // 发送暂停信号
            //emit playbackPaused();
        } else {
            ui->playPauseButton->setIcon(playIcon);
            ui->playPauseButton->setProperty("playbackState", "playing");
            // 发送播放信号
            //emit playbackStarted();
        }
    });
}

DownloadItem::~DownloadItem()
{
    delete ui;
}
