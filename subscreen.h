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


#include "QCustomPlot/qcustomplot/qcustomplot.h" // the header file of QCustomPlot. Don't forget to add it to your project, if you use an IDE, so it gets compiled.


QT_BEGIN_NAMESPACE
namespace Ui { class SubscreenUi; }
QT_END_NAMESPACE

class Subscreen : public QWidget //QMainWindow
{
    Q_OBJECT

public:
    Subscreen(QWidget *parent = 0);
    ~Subscreen();

    void setupAdvancedAxesDemo(QCustomPlot *customPlot);
    void setupRealtimeDataDemo(QCustomPlot *customPlot);


private:
    Ui::SubscreenUi *ui;
    QTimer dataTimer;

public slots:

    void Enter_lineEdit_1();
    void Enter_lineEdit_2();
    void Enter_lineEdit_3();
    void Graphs_up();

    void realtimeDataSlot();
};


#endif // SUBSCREEN_H
