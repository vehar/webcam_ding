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

//public Q_SLOTS:
    //void setCaptureMode(QCamera::CaptureModes mode);

   // void load();
   // void unload();

   // void start();
   // void stop();

//private:

   // static QByteArray m_defaultDevice;

    QPointer< QCamera > m_camera;
    Ui::SubscreenUi *ui;
    QTimer dataTimer;

    QCamera *camera;
    QCameraImageCapture *imageCapture;
    QMediaRecorder* mediaRecorder;

    QPixmap m_pixmap;

    QTimer *m_timer;

public slots:

    void Enter_lineEdit_1();
    void Enter_lineEdit_2();
    void Enter_lineEdit_3();
    void Graphs_up();

    void Surnames();
    void Capture_photo();
    void Show_photo(QString img_file_name);
    void Print();

    void Dbg();
    void Recapture();


    void Focus_2();
    void Focus_3();
    void Focus_4();
    void Focus_Btn();

    void Print_photo();




    void realtimeDataSlot();

    //void displayRecorderError();
    //void displayCameraError();


    void photo_view();
    void setCamera(const QByteArray &cameraDevice);
    void startCamera();
    void stopCamera();
    void updateCameraDevice(QAction *action);
    void CreateCameraDevice(QByteArray &cameraDevice);
    void CreateNextCameraDevice(QAction *action);


   // void updateCameraState(QCamera::State);
   // void updateCaptureMode();
};


#endif // SUBSCREEN_H
