#ifndef DOWNLOADITEM_H
#define DOWNLOADITEM_H

#include <QWidget>
#include <QStyle>

namespace Ui {
class DownloadItem;
}

class DownloadItem : public QWidget
{
    Q_OBJECT

public:
    explicit DownloadItem(QWidget *parent = nullptr);
    ~DownloadItem();

private slots:
    //void continueDownload();
    //void pausedDownload();

private:
    Ui::DownloadItem *ui;
};

#endif // DOWNLOADITEM_H
