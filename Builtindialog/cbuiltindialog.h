#ifndef CBUILTINDIALOG_H
#define CBUILTINDIALOG_H

#include <QDialog>
#include <QtWidgets>

class CBuiltinDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CBuiltinDialog(QWidget *parent = nullptr);
    ~CBuiltinDialog() override;
private:
    QTextEdit* displayTextEdit;
    QPushButton* colorPushBtn;
    QPushButton* errorPushBtn;
    QPushButton* filePushBtn;
    QPushButton* fontPushBtn;
    QPushButton* inputPushBtn;
    QPushButton* pagePushBtn;
    QPushButton* progressPushBtn;
    QPushButton* printPushBtn;
    QPushButton* colortextPushBtn;
private slots:
    void doPushBtn();
};
#endif // CBUILTINDIALOG_H
