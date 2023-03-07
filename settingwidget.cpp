#include "settingwidget.h"
#include "ui_settingwidget.h"

SettingWidget::SettingWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SettingWidget)
{
    ui->setupUi(this);

    QObject::connect(ui->changePathBtn,&QToolButton::clicked,this,&::SettingWidget::handleChangePath);
}

SettingWidget::~SettingWidget()
{
    delete ui;
}

void SettingWidget::handleChangePath()
{
    QString folderPath = QFileDialog::getExistingDirectory(this, tr("选择文件夹"), "", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    if (!folderPath.isEmpty()) {
        // 用户选择了文件夹，可以进行相应的处理
        ui->filePath->setText(folderPath);
    } else {
        // 用户取消了选择，可以进行相应的处理
        // ...
    }

}
