#include "mediaitem.h"
#include "ui_mediaitem.h"

MediaItem::MediaItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MediaItem)
{
    ui->setupUi(this);

    //ui->openInExplorerBtn->setIcon(style()->standardIcon(QStyle::SP_DirLinkOpenIcon));
    //ui->clearBtn->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
}

MediaItem::~MediaItem()
{
    delete ui;
}
