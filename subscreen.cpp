#include "subscreen.h"
#include "ui_subscreen.h"

//#include "videosettings.h"
//#include "imagesettings.h"

#include <QMediaService>
#include <QMediaRecorder>
#include <QCameraViewfinder>
#include <QMediaMetaData>

#include <QMessageBox>
#include <QPalette>

#include <QtWidgets>

#include <QtTest/QTest>

//#define __DEBUG

QVector<double> x1a(20), y1a(20);
QVector<double> x1b(50), y1b(50);
QVector<double> x2(200), y2(200);
QVector<double> x3, y3;


Subscreen::Subscreen(QWidget *parent) :  QWidget(parent),ui(new Ui::SubscreenUi)
 {   
 ui->setupUi(this);
 setWindowTitle("Subscreen");
 QRect screenres = QApplication::desktop()->screenGeometry(1);
 move(QPoint(screenres.x(), screenres.y()));

setupAdvancedAxesDemo(ui->customPlot_2);
setupRealtimeDataDemo(ui->customPlot);

QShortcut shtcut(Qt::Key_Escape, this, SLOT(close()), 0, Qt::ApplicationShortcut);

#ifndef __DEBUG
    showFullScreen();
    setWindowFlags(Qt::FramelessWindowHint);// убираем строку заголовка
#endif
   // ui->menubar->hide(); //Debug
    //asterisks will be shown when values are entered
    //ui->lineEdit_password->setEchoMode(QLineEdit::Password); //Debug


     connect(ui->lineEdit_1, SIGNAL(returnPressed()), SLOT(Enter_lineEdit_1()));
     connect(ui->lineEdit_2, SIGNAL(returnPressed()), SLOT(Enter_lineEdit_2()));
     connect(ui->lineEdit_3, SIGNAL(returnPressed()), SLOT(Enter_lineEdit_3()));

   //  QCPAxisRect *wideAxisRect = new QCPAxisRect(ui->customPlot);
   //  QCPGraph *mainGraph1 =ui->customPlot->addGraph(wideAxisRect->axis(QCPAxis::atBottom), wideAxisRect->axis(QCPAxis::atLeft));

   //  QCPAxisRect *subRectLeft = new QCPAxisRect(ui->customPlot_2, false); // false means to not setup default axes
   //  QCPAxisRect *subRectRight = new QCPAxisRect(ui->customPlot_2, false);
   //  QCPBars *bars1 = new QCPBars(subRectRight->axis(QCPAxis::atBottom), subRectRight->axis(QCPAxis::atRight));

#ifdef __DEBUG
    // ui->stackedWidget->setCurrentIndex(0);
    //   photo_view(); //camera
#endif

}


Subscreen::~Subscreen()
{
   camera->stop();//TODO вырубать все (не 1)
    delete ui;
   // delete camera;
}


void Subscreen::Enter_lineEdit_1()
 {
    if(ui->lineEdit_1->text()=="P") //if password correct
    {
    Graphs_up();
    }
    else
    {
      QMessageBox::critical( this, "Error", "Вы ввели неверное Р!" );
    }
 };

void Subscreen::Enter_lineEdit_2()
 {
    if(ui->lineEdit_2->text()=="Q") //if password correct
    {
    Graphs_up();
    }
    else
    {
      QMessageBox::critical( this, "Error", "Вы ввели неверное Q!" );
    }

 };

void Subscreen::Enter_lineEdit_3()
 {
    if(ui->lineEdit_3->text()=="N") //if password correct
    {
    Graphs_up();
    }
    else
    {
      QMessageBox::critical( this, "Error", "Вы ввели неверное N!" );
    }
 };




void Subscreen::Graphs_up()
{
    QVector<double> x_n(30), y_n(30);
    QVector<double> x2(200), y2(200);
    QVector<double> xx3, yy3;
    double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;
    double value0 = qSin(key);
static double g_cnt = 0;

if(g_cnt >= 0.5)
{
    ui->customPlot_2->graph(0)->setPen(QPen(QColor(Qt::red), 2));
    ui->customPlot_2->graph(1)->setBrush(QColor(0, 255, 0, 100));

}
if(g_cnt >= 1)
{
    g_cnt=0;
    ui->stackedWidget->setCurrentIndex(0);
    photo_view(); //camera
}

g_cnt+=0.5;

    for (int i=0; i<x_n.size(); ++i)
    {
      x_n[i] = i/(double)(x_n.size()-1)*10-5.0;
      y_n[i] = g_cnt+qCos(x_n[i]);
    }

    ui->customPlot_2->graph(0)->setData(x_n, y_n);

      qsrand(g_cnt*3);
    for (int i=0; i<x2.size(); ++i)
    {
      x2[i] = i/(double)x2.size()*10;
      y2[i] = qrand()/(double)RAND_MAX-0.5+y2[qAbs(i-1)];
    }
    ui->customPlot_2->graph(2)->setData(x2, y2);
//  ui->customPlot_2->(0)->setData(xx3, yy3);

//ui->customPlot_2->graph(2)->setData(x3, y3);
//ui->customPlot_2->bars1->rescaleAxes();
//wideAxisRect->axis(QCPAxis::atLeft, 1)->setRangeLower(0);

// ui->customPlot->xAxis->setRange(key+0.25, 8, Qt::AlignRight);
//ui->customPlot->graph(0)->addData(key, value0);

ui->customPlot_2->replot();
}

//QCPAxisRect *subRectLeft = new QCPAxisRect(Subscreen::ui->customPlot_2, false); // false means to not setup default axes



void Subscreen::setupAdvancedAxesDemo(QCustomPlot *customPlot)
{
  //demoName = "Advanced Axes Demo";

  // configure axis rect:
  customPlot->plotLayout()->clear(); // clear default axis rect so we can start from scratch

  QCPAxisRect *wideAxisRect = new QCPAxisRect(customPlot);
  wideAxisRect->setupFullAxesBox(true);
  wideAxisRect->axis(QCPAxis::atRight, 0)->setTickLabels(true);
  wideAxisRect->addAxis(QCPAxis::atLeft)->setTickLabelColor(QColor("#6050F8")); // add an extra axis on the left and color its numbers

  QCPLayoutGrid *subLayout = new QCPLayoutGrid;
  customPlot->plotLayout()->addElement(0, 0, wideAxisRect); // insert axis rect in first row
  customPlot->plotLayout()->addElement(1, 0, subLayout); // sub layout in second row (grid layout will grow accordingly)
  //customPlot->plotLayout()->setRowStretchFactor(1, 2);
  // prepare axis rects that will be placed in the sublayout:
  QCPAxisRect *subRectLeft = new QCPAxisRect(customPlot, false); // false means to not setup default axes
  QCPAxisRect *subRectRight = new QCPAxisRect(customPlot, false);
  subLayout->addElement(0, 0, subRectLeft);
  subLayout->addElement(0, 1, subRectRight);
 // subRectRight->setMaximumSize(150, 150); // make bottom right axis rect size fixed 150x150
 // subRectRight->setMinimumSize(150, 150); // make bottom right axis rect size fixed 150x150
  // setup axes in sub layout axis rects:
  subRectLeft->addAxes(QCPAxis::atBottom | QCPAxis::atLeft);
  subRectRight->addAxes(QCPAxis::atBottom | QCPAxis::atRight);
  subRectLeft->axis(QCPAxis::atLeft)->setAutoTickCount(2);
  subRectRight->axis(QCPAxis::atRight)->setAutoTickCount(2);
  subRectRight->axis(QCPAxis::atBottom)->setAutoTickCount(2);
  subRectLeft->axis(QCPAxis::atBottom)->grid()->setVisible(true);
  // synchronize the left and right margins of the top and bottom axis rects:
  QCPMarginGroup *marginGroup = new QCPMarginGroup(customPlot);
  subRectLeft->setMarginGroup(QCP::msLeft, marginGroup);
  subRectRight->setMarginGroup(QCP::msRight, marginGroup);
  wideAxisRect->setMarginGroup(QCP::msLeft | QCP::msRight, marginGroup);
  // move newly created axes on "axes" layer and grids on "grid" layer:
  foreach (QCPAxisRect *rect, customPlot->axisRects())
  {
    foreach (QCPAxis *axis, rect->axes())
    {
      axis->setLayer("axes");
      axis->grid()->setLayer("grid");
    }
  }

  // prepare data:

  qsrand(3);
  for (int i=0; i<x1a.size(); ++i)
  {
    x1a[i] = i/(double)(x1a.size()-1)*10-5.0;
    y1a[i] = qCos(x1a[i]);
  }
  for (int i=0; i<x1b.size(); ++i)
  {
    x1b[i] = i/(double)x1b.size()*10-5.0;
    y1b[i] = qExp(-x1b[i]*x1b[i]*0.2)*1000;
  }
  for (int i=0; i<x2.size(); ++i)
  {
    x2[i] = i/(double)x2.size()*10;
    y2[i] = qrand()/(double)RAND_MAX-0.5+y2[qAbs(i-1)];
  }

  x3 << 1 << 2 << 3 << 4;
  y3 << 2 << 2.5 << 4 << 1.5;

  // create and configure plottables:
  QCPGraph *mainGraph1 = customPlot->addGraph(wideAxisRect->axis(QCPAxis::atBottom), wideAxisRect->axis(QCPAxis::atLeft));
  mainGraph1->setData(x1a, y1a);
  mainGraph1->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, QPen(Qt::black), QBrush(Qt::white), 6));
  mainGraph1->setPen(QPen(QColor(120, 120, 120), 2));

  QCPGraph *mainGraph2 = customPlot->addGraph(wideAxisRect->axis(QCPAxis::atBottom), wideAxisRect->axis(QCPAxis::atLeft, 1));
  mainGraph2->setData(x1b, y1b);
  mainGraph2->setPen(QPen(QColor("#8070B8"), 2));
  mainGraph2->setBrush(QColor(110, 170, 110, 30));
  mainGraph1->setChannelFillGraph(mainGraph2);
  mainGraph1->setBrush(QColor(255, 161, 0, 50));


  QCPGraph *graph2 = customPlot->addGraph(subRectLeft->axis(QCPAxis::atBottom), subRectLeft->axis(QCPAxis::atLeft));
  graph2->setData(x2, y2);
  graph2->setLineStyle(QCPGraph::lsImpulse);
  graph2->setPen(QPen(QColor("#FFA100"), 1.5));

  QCPBars *bars1 = new QCPBars(subRectRight->axis(QCPAxis::atBottom), subRectRight->axis(QCPAxis::atRight));
  customPlot->addPlottable(bars1);
  bars1->setWidth(3/(double)x3.size());
  bars1->setData(x3, y3);
  bars1->setPen(QPen(Qt::black));
  bars1->setAntialiased(false);
  bars1->setAntialiasedFill(false);
  bars1->setBrush(QColor("#705BE8"));
  bars1->keyAxis()->setAutoTicks(false);
  bars1->keyAxis()->setTickVector(x3);
  bars1->keyAxis()->setSubTickCount(0);

  // rescale axes according to graph's data:
  mainGraph1->rescaleAxes();
  mainGraph2->rescaleAxes();
  graph2->rescaleAxes();
  bars1->rescaleAxes();
  wideAxisRect->axis(QCPAxis::atLeft, 1)->setRangeLower(0);



  // make left and bottom axes transfer their ranges to right and top axes:
 // connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
 // connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));

  // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
  //connect(&dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
  //dataTimer.start(100); // Interval 0 means to refresh as fast as possible
}

void Subscreen::setupRealtimeDataDemo(QCustomPlot *customPlot)
{
  // include this section to fully disable antialiasing for higher performance:
  customPlot->setNotAntialiasedElements(QCP::aeAll);
  QFont font;
  font.setStyleStrategy(QFont::NoAntialias);
  customPlot->xAxis->setTickLabelFont(font);
  customPlot->yAxis->setTickLabelFont(font);
  customPlot->legend->setFont(font);

  customPlot->addGraph(); // blue line
  customPlot->graph(0)->setPen(QPen(QColor(Qt::blue), 2));
  customPlot->graph(0)->setBrush(QBrush(QColor(240, 150, 40))); //заливка
  customPlot->graph(0)->setAntialiasedFill(false);

  customPlot->addGraph(); // red line
  customPlot->graph(1)->setPen(QPen(QColor(Qt::red), 2));
  customPlot->graph(0)->setChannelFillGraph(customPlot->graph(1)); //0

  customPlot->addGraph(); // blue dot
  customPlot->graph(2)->setPen(QPen(Qt::blue)); //цвет линий
  customPlot->graph(2)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(2)->setScatterStyle(QCPScatterStyle::ssDisc);

  customPlot->addGraph(); // red dot
  customPlot->graph(3)->setPen(QPen(Qt::red));
  customPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  customPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssDisc);

  customPlot->xAxis->setTickLabelType(QCPAxis::ltDateTime);
  customPlot->xAxis->setDateTimeFormat("mm:ss");
  customPlot->xAxis->setAutoTickStep(false);
  customPlot->xAxis->setTickStep(2);
  customPlot->axisRect()->setupFullAxesBox();


  // make left and bottom axes transfer their ranges to right and top axes:
  connect(customPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(customPlot->yAxis, SIGNAL(rangeChanged(QCPRange)), customPlot->yAxis2, SLOT(setRange(QCPRange)));

  // setup a timer that repeatedly calls MainWindow::realtimeDataSlot:
  connect(&dataTimer, SIGNAL(timeout()), this, SLOT(realtimeDataSlot()));
  dataTimer.start(0); // Interval 0 means to refresh as fast as possible
}

void Subscreen::realtimeDataSlot()
{
  // calculate two new data points:
#if QT_VERSION < QT_VERSION_CHECK(4, 7, 0)
  double key = 0;
#else
  double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;
#endif
  static double lastPointKey = 0;
  if (key-lastPointKey > 0.01) // at most add point every 10 ms
  {
    double value0 = qSin(key); //sin(key*1.6+cos(key*1.7)*2)*10 + sin(key*1.2+0.56)*20 + 26;
    double value1 = qCos(key); //sin(key*1.3+cos(key*1.2)*1.2)*7 + sin(key*0.9+0.26)*24 + 26;
    // add data to lines:

    ui->customPlot->graph(0)->addData(key, value0);
    ui->customPlot->graph(1)->addData(key, value1);
    // set data of dots:
    ui->customPlot->graph(2)->clearData();
    ui->customPlot->graph(2)->addData(key, value0);
    ui->customPlot->graph(3)->clearData();
    ui->customPlot->graph(3)->addData(key, value1);
    // remove data of lines that's outside visible range:
    ui->customPlot->graph(0)->removeDataBefore(key-8);
    ui->customPlot->graph(1)->removeDataBefore(key-8);
    // rescale value (vertical) axis to fit the current data:
    ui->customPlot->graph(0)->rescaleValueAxis();
    ui->customPlot->graph(1)->rescaleValueAxis(true);
    lastPointKey = key;


    ui->customPlot->graph(2)->addData(key, value0);
    ui->customPlot->graph(2)->addData(key, value1);
    lastPointKey = key;

  }
  // make key axis range scroll with the data (at a constant range size of 8):
  ui->customPlot->xAxis->setRange(key+0.25, 8, Qt::AlignRight);
  ui->customPlot->replot();

  // calculate frames per second:
  static double lastFpsKey;
  static int frameCount;
  ++frameCount;
  if (key-lastFpsKey > 2) // average fps over 2 seconds
  {
 //   ui->statusBar->showMessage(
   /*       QString("%1 FPS, Total Data points: %2")
          .arg(frameCount/(key-lastFpsKey), 0, 'f', 0)
          .arg(ui->customPlot->graph(0)->data()->count()+ui->customPlot->graph(1)->data()->count())
          , 0);
    lastFpsKey = key;*/
    frameCount = 0;
  }
}



void Subscreen::photo_view()
{
    QByteArray cameraDevice;     //Camera devices:
    QActionGroup *videoDevicesGroup = new QActionGroup(this);
    QList< QByteArray > cams_arr = QCamera::availableDevices();
    QByteArray cam;

ui->viewfinder->show();

    ////////////camera///////////////////////////
       //if ( !cams_arr.contains( m_defaultDevice ) )
      // {
              if ( cams_arr.count() == 0 )
              {
                  QMessageBox::critical( this, "Error", "Web Cams are not found!" );
                  deleteLater();
                  return;
              }

qDebug() << "CamsCnt:" << cams_arr.count();

        // connect(ui->lineEdit_password, SIGNAL(returnPressed()), SLOT(EnterPassword()));
         // connect(ui->action0, SIGNAL(triggered()), SLOT(CamDebug()));
         // connect(ui->action1, SIGNAL(triggered()), SLOT(EnterPassword()));

          //connect(videoDevicesGroup, SIGNAL(triggered(QAction*)), SLOT(CreateNextCameraDevice(QAction*)));
          //!!!!delete imageCapture, mediaRecorder,camera; //удалить старые на всякий

connect(videoDevicesGroup, SIGNAL(triggered(QAction*)), SLOT(CreateNextCameraDevice(QAction*)));

          //todo выводить сообщение о нехватке камер/ дать возможность распределять какую - на что выводить
           if ( cams_arr.count() >= 3 ) //>=3
           {
              CreateCameraDevice(cams_arr[2]); //2
           }

   ////////////camera end///////////////////////////
}

void Subscreen::CreateCameraDevice(QByteArray &cameraDevice)
{
    camera = new QCamera(cameraDevice); //создать новый
    camera->setViewfinder(ui->viewfinder);
    camera->start();
}

void Subscreen::CreateNextCameraDevice(QAction *action)
{
    camera = new QCamera(action->data().toByteArray()); //создать новый
    camera->setViewfinder(ui->viewfinder);
    camera->start();
}


void Subscreen::updateCameraDevice(QAction *action)
{
    //setCamera(action->data().toByteArray()); //динамически обноляет при  переключении
}


void Subscreen::startCamera() //in file menu
{
    camera->start();
}
void Subscreen::stopCamera() //in file menu
{
    camera->stop();
}


//UNUSED

void Subscreen::setCamera(const QByteArray &cameraDevice)
{
    delete imageCapture; //удалить старые
    delete mediaRecorder;
    delete camera;

    camera = new QCamera(cameraDevice); //создать новый
    camera->setViewfinder(ui->viewfinder);

#ifdef __DEBUG
    camera->start();
#endif
}

/*
void Camera::closeEvent(QCloseEvent *event)
{
    if (isCapturingImage) {
        setEnabled(false);
        applicationExiting = true;
        event->ignore();
    } else {
        event->accept();
    }
}
*/
