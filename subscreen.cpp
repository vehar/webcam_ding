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
#include <QPrintDialog>
#include <QPrinter>

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

     connect(ui->Photo_Button, SIGNAL(pressed()), SLOT(Capture_photo()));
     connect(ui->Print_Button, SIGNAL(pressed()), SLOT(Print()));

     connect(ui->lineEdit_Surname_1, SIGNAL(returnPressed()), SLOT(Focus_2()));
      connect(ui->lineEdit_Surname_2, SIGNAL(returnPressed()), SLOT(Focus_3()));
       connect(ui->lineEdit_Surname_3, SIGNAL(returnPressed()), SLOT(Focus_4()));
        connect(ui->lineEdit_Surname_4, SIGNAL(returnPressed()), SLOT(Focus_Btn()));
         //connect(ui->Print_Button, SIGNAL(returnPressed()), SLOT(Print()));

         connect(ui->Photo_Prev, SIGNAL(pressed()), SLOT(Recapture())); //recapture
         connect(ui->Photo_Next, SIGNAL(pressed()), SLOT(Surnames())); //recapture

         connect(ui->Debug_btn, SIGNAL(pressed()), SLOT(Dbg())); //

      //   imageCapture = new QCameraImageCapture(camera);
       //  imageCapture->setCaptureDestination( QCameraImageCapture::CaptureToFile );
       //  camera->setCaptureMode(QCamera::CaptureStillImage);
//connect(imageCapture, SIGNAL(imageCaptured()), SLOT(Surnames())); //

         /*
         connect( ui->viewfinder, &QCameraImageCapture::imageSaved, [=]()
             {
             QString fileName = QCoreApplication::applicationDirPath() + "/image.jpg";

                 QFile imageFile( fileName );

                 if ( imageFile.exists() )
                 {
                     m_pixmap = QPixmap::fromImage( QImage( fileName ).mirrored( true, false ) );
                     ui->picture->setPixmap( m_pixmap.scaled( ui->picture->width(), ui->picture->height(), Qt::KeepAspectRatio ) );
                     imageFile.remove();
                 }
                 else
                 {
                     QMessageBox::critical( this, "Error", "Image file are not found!" );

                     deleteLater();
                     return;
                 }
             }*/


        // connect( imageCapture, &QCameraImageCapture::imageCaptured, [=]( int id, const QImage &image )


   //  QCPAxisRect *wideAxisRect = new QCPAxisRect(ui->customPlot);
   //  QCPGraph *mainGraph1 =ui->customPlot->addGraph(wideAxisRect->axis(QCPAxis::atBottom), wideAxisRect->axis(QCPAxis::atLeft));

   //  QCPAxisRect *subRectLeft = new QCPAxisRect(ui->customPlot_2, false); // false means to not setup default axes
   //  QCPAxisRect *subRectRight = new QCPAxisRect(ui->customPlot_2, false);
   //  QCPBars *bars1 = new QCPBars(subRectRight->axis(QCPAxis::atBottom), subRectRight->axis(QCPAxis::atRight));


       //  camera->start(); // Viewfinder frames start flowing
        // imageCapture = new QCameraImageCapture(camera);
       //  imageCapture->setCaptureDestination( QCameraImageCapture::CaptureToFile );

        // camera->setCaptureMode(QCamera::CaptureStillImage);




#ifdef __DEBUG
    // ui->stackedWidget->setCurrentIndex(0);
    // photo_view(); //camera
#endif

}


Subscreen::~Subscreen()
{
   camera->stop();//TODO вырубать все (не 1)
   delete camera;
   delete ui;
}

void Subscreen::Focus_2()
{
 ui->lineEdit_Surname_2->setFocus();
}
void Subscreen::Focus_3()
{
 ui->lineEdit_Surname_3->setFocus();
}
void Subscreen::Focus_4()
{
 ui->lineEdit_Surname_4->setFocus();
}
void Subscreen::Focus_Btn()
{
 ui->Print_Button->setFocus();
}

void Subscreen::Capture_photo()
{
    QString Img_fileName = QCoreApplication::applicationDirPath() + "/image.jpg";

    camera->start(); // Viewfinder frames start flowing
    imageCapture = new QCameraImageCapture(camera);
    imageCapture->setCaptureDestination( QCameraImageCapture::CaptureToFile );
    camera->setCaptureMode(QCamera::CaptureStillImage);


    //on half pressed shutter button
    camera->searchAndLock();
    //on shutter button pressed
    imageCapture->capture(Img_fileName);
    //on shutter button released
    camera->unlock();

    //ui->stackedWidget_Under->setCurrentIndex(1);
    ui->stackedWidget->setCurrentIndex(1);
   // Show_photo(Img_fileName);

   // connect(imageCapture, SIGNAL(&QCameraImageCapture::imageCaptured()), SLOT(Dbg())); //
   // connect( imageCapture, &QCameraImageCapture::imageCaptured, Dbg()( int id, const QImage &image )

    //Dbg();
}

void Subscreen::Recapture()
{
    //желательно imageFile.remove();
/*
    QString Img_fileName = QCoreApplication::applicationDirPath() + "/fon.png";
    QFile imageFile( Img_fileName );

                if ( imageFile.exists() )
                {
                    m_pixmap = QPixmap::fromImage( QImage( Img_fileName ));
                    ui->picture->setPixmap( m_pixmap.scaled( ui->picture->width(), ui->picture->height(), Qt::IgnoreAspectRatio ) );
                }
*/
     ui->stackedWidget->setCurrentIndex(0);
}

void Subscreen::Dbg()
{
    QString Img_fileName = QCoreApplication::applicationDirPath() + "/image.jpg";
    QFile imageFile( Img_fileName );

                if ( imageFile.exists() )
                {
                    m_pixmap = QPixmap::fromImage( QImage( Img_fileName ).mirrored( true, false ) );
                    ui->picture->setPixmap( m_pixmap.scaled( ui->picture->width(), ui->picture->height(), Qt::IgnoreAspectRatio ) );
                    //imageFile.remove();
                }
                else
                {
                    QMessageBox::critical( this, "Error", "Image file are not found!" );
                }
}

void Subscreen::Show_photo(QString img_file_name)
{
    QFile imageFile( img_file_name );

                if ( imageFile.exists() )
                {
                    m_pixmap = QPixmap::fromImage( QImage( img_file_name ).mirrored( true, false ) );
                    ui->picture->setPixmap( m_pixmap.scaled( ui->picture->width(), ui->picture->height(), Qt::KeepAspectRatio ) );
                    //imageFile.remove();
                }
                else
                {
                    QMessageBox::critical( this, "Error", "Image file are not found!" );
                    deleteLater();
                   // return;
                }
}

void Subscreen::Print_photo()
{
    QPrinter printer;

    printer.setOutputFormat(QPrinter::NativeFormat);
    //printer->setPageSize(QPrinter::A5);
   // printer->setOrientation(QPrinter::Landscape);
           // название протокола формируем согласно заводскому номеру и году
   //printer.setOutputFileName( "protocol/" + m_ui->labelNumberZav_znach->text() + m_ui->labelNumberDec_znach->text()+".pdf");  //по другому printer.setOutputFileName("Test.pdf");
   printer.setOutputFileName( "Test print.pdf");

    QPrintDialog printDialog(&printer, this);

      if (printDialog.exec())
      {
           // объект отрисовки
           QPainter painter;

           // проверка открытия для редактора
           if (! painter.begin(&printer))
           {
               // открытие принтера проверим
               qWarning("Ошибка открытия принтера!");
               return; // Выходим
           }

           // Сообственно все, откроется диалог где указывать принтер нужно, далее рисуем просто наш отчет
           //Теперь отрисуем отчет на этом принтере
          painter.setFont(QFont("Arial", 14)); //шрифт
          painter.setPen(QPen(2)); // толщина линий таблицы
          int y_pdf = 30;
          int WtabPdf=360;
          int X_oneTab = 10;
          int X_twoTab = 370;
          int H_tab = 25;
          int W_pic = 720;
          int H_pic = W_pic;


         // painter.drawText(230,y_pdf, "Протокол № " + ui->lineEdit_Surname_1->text());

          QString Img_fileName = QCoreApplication::applicationDirPath() + "/image.jpg";
          m_pixmap = QPixmap::fromImage( QImage( Img_fileName ).mirrored( true, false ) );

          QRect rectfont_5 = QRect(X_oneTab,y_pdf,WtabPdf,H_tab);
          rectfont_5.setRect(X_oneTab,y_pdf,W_pic,H_pic);
          painter.drawRect(rectfont_5);
          painter.drawPixmap(rectfont_5,m_pixmap);



          y_pdf +=H_pic+H_tab;
          QRect rectfont_1 = QRect(X_oneTab,y_pdf,WtabPdf,H_tab);
          painter.drawRect(rectfont_1);
          painter.drawText(rectfont_1, Qt::AlignLeft ," Участник № "+QString::number(1));
          rectfont_1.setRect(X_twoTab,y_pdf,WtabPdf,H_tab);
          painter.drawRect(rectfont_1);
          painter.drawText(rectfont_1, Qt::AlignLeft ," "+ui->lineEdit_Surname_1->text());

          y_pdf +=H_tab;
          QRect rectfont_2 = QRect(X_oneTab,y_pdf,WtabPdf,H_tab);
          painter.drawRect(rectfont_2);
          painter.drawText(rectfont_2, Qt::AlignLeft ," Участник № "+QString::number(2));
          rectfont_2.setRect(X_twoTab,y_pdf,WtabPdf,H_tab);
          painter.drawRect(rectfont_2);
          painter.drawText(rectfont_2, Qt::AlignLeft ," "+ui->lineEdit_Surname_2->text());

          y_pdf +=H_tab;
          QRect rectfont_3 = QRect(X_oneTab,y_pdf,WtabPdf,H_tab);
          painter.drawRect(rectfont_3);
          painter.drawText(rectfont_3, Qt::AlignLeft ," Участник № "+QString::number(3));
          rectfont_3.setRect(X_twoTab,y_pdf,WtabPdf,H_tab);
          painter.drawRect(rectfont_3);
          painter.drawText(rectfont_3, Qt::AlignLeft ," "+ui->lineEdit_Surname_3->text());

          y_pdf +=H_tab;
          QRect rectfont_4 = QRect(X_oneTab,y_pdf,WtabPdf,H_tab);
          painter.drawRect(rectfont_4);
          painter.drawText(rectfont_4, Qt::AlignLeft ," Участник № "+QString::number(4));
          rectfont_4.setRect(X_twoTab,y_pdf,WtabPdf,H_tab);
          painter.drawRect(rectfont_4);
          painter.drawText(rectfont_4, Qt::AlignLeft ," "+ui->lineEdit_Surname_4->text());

          painter.end(); // завершаем рисование
    }  // end printDialog.exec()
}

void Subscreen::Surnames()
{
ui->stackedWidget->setCurrentIndex(3);//goto surnanes
}
void Subscreen::Print()
{

 ui->stackedWidget->setCurrentIndex(4);//goto exit
 Print_photo();
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


          //connect(videoDevicesGroup, SIGNAL(triggered(QAction*)), SLOT(CreateNextCameraDevice(QAction*)));
          //!!!!delete imageCapture, mediaRecorder,camera; //удалить старые на всякий

connect(videoDevicesGroup, SIGNAL(triggered(QAction*)), SLOT(CreateNextCameraDevice(QAction*)));

          //todo выводить сообщение о нехватке камер/ дать возможность распределять какую - на что выводить
           if ( cams_arr.count() >= 1 ) //>=3
           {
              CreateCameraDevice(cams_arr[1]); //2
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
