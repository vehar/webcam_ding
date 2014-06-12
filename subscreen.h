#ifndef SUBSCREEN_H
#define SUBSCREEN_H

#include <QCamera>
#include <QCameraImageCapture>
#include <QMediaRecorder>
#include <QMainWindow>

//+
#include <QtGui/QClipboard>
#include <QtMultimedia/QtMultimedia>
#include <QtMultimediaWidgets/QtMultimediaWidgets>
#include <QtWidgets/QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class SubscreenUi; }
QT_END_NAMESPACE

class Subscreen : public QWidget //QMainWindow
{
    Q_OBJECT

public:
    Subscreen(QWidget *parent = 0);
    ~Subscreen();

private:
    Ui::SubscreenUi *ui;
};


#endif // SUBSCREEN_H
