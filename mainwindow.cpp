#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qwt_plot.h"
#include "qwt_plot_curve.h"
#include "qwt_plot_directpainter.h"
#include <QMap>
#include <QImage>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    test();
    repaint();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pixmaxex(){

//    double xSp[150]={0,5,10,15,20,25,30};
//    double ySp[150]={4,2,6,1,7,3,4};

//    QPixmap pixmap( 371, 420 );
//    pixmap.fill( Qt::white );

//    QPainter painter( &pixmap );
//    painter.setWindow(0,0,371,700);
//    QPen pen(Qt::black);
//    pen.setWidth(4);
//    painter.setPen( pen );

//    painter.drawRect( 10, 10, 350, 400 );
//    QwtPlot *myPlot = new QwtPlot(NULL);
//    myPlot->setFixedWidth(300);
//    myPlot->setWindowTitle("Cosinus and Straight Line Graph");
    QwtPlotCurve *curve;
    curve = new QwtPlotCurve();
//    QVector <QPointF> myPoints;

//    for (int i=0;i<7;i++){
//        myPoints.append(QPointF(xSp[i],ySp[i]));
//    }

//    curve->setSamples(xSp,ySp,7);
//    curve->setPen(QPen(Qt::blue,1));
//    curve->attach(ui->qwtPlot);
//    const QwtScaleMap *sy = new QwtScaleMap();
//    sy->setScaleInterval(1, 10);
//    const QwtScaleMap *sx = new QwtScaleMap();
//    sx->setScaleInterval(0,8);
//    curve->drawSeries(&painter,sx,sy,QRectF(10,10,350,400),0,10);


    //    QVector<QPointF> polyPoints;
    ////    polyPoints << QPoint( 60, 10 ) << QPoint( 80, 90 ) << QPoint( 75, 10 ) << QPoint( 110, 90 );
    //    for (int i=0;i<7;i++){
    //        polyPoints << QPointF((xSp[i]),(ySp[i]));
    //    }

    //    QVector<QPointF> linePoints;
    //    foreach( QPointF point, polyPoints )
    //      linePoints << point + QPointF( 80, 0 );

    ////    painter.drawLine( QPoint( 10, 10 ), QPoint( 30, 90 ) );
    //    painter.drawPolyline( polyPoints );
    ////    painter.drawLines( linePoints );

//    pixmap.save( "/opt/scca/drawlines.png" );

}

void MainWindow::test(){
    QwtPlotDirectPainter *pp = new QwtPlotDirectPainter();
        QPixmap pixmap( 370, 420 );
        pixmap.fill( Qt::white );

        QPainter painter( &pixmap );
        painter.setWindow(12,0,370,420);
        QPen pen(Qt::black);
        pen.setWidth(4);
        painter.setPen( pen );

        double xSp[150]={0,5,10,15,20,25,30};
        double ySp[150]={3,2.6,4.5,1,6,2,5};
//        double xSp[150]={0,5,10,15,20,25,30};
//        double ySp[150]={0,0,0,0,0,0,0};

        QString str="Abs";
        QwtText title(str);
        title.setFont(QFont("Verdana", 9));
        ui->qwtPlot->setAxisTitle(QwtPlot::yLeft, title);

        str = "Time (sec)";
        QwtText title1(str);
        title1.setFont(QFont("Verdana", 9));
        ui->qwtPlot->setAxisTitle(QwtPlot::xBottom, title1);

    QwtPlotCurve *curve1 = new QwtPlotCurve;
    curve1->attach(ui->qwtPlot);
//    curve1->setAxes();

//    std::vector<double> times1;
//    std::vector<double> times2;
//    std::vector<double> data1;
//    std::vector<double> data2;

    QVector<QPointF>* samples = new QVector<QPointF>;

    for (int i=0;i<7;i++){
        samples->push_back(QPointF(xSp[i],ySp[i]));
    }
//    times1.push_back(-5);
//    times1.push_back(8);

//    data1.push_back(5);
//    data1.push_back(7);

    QwtPointSeriesData* myData = new QwtPointSeriesData;

    myData->setSamples(*samples);
    curve1->setData(myData);
    QPen linepen(Qt::black);
    linepen.setWidth(1);
    curve1->setPen(linepen);
    curve1->attach(ui->qwtPlot);

//    curve1->setSamples(&times1.front(), &data1.front(), data1.size());

//    times2.push_back(0);
//    times2.push_back(3);

//    data2.push_back(2);
//    data2.push_back(3);

    pp->drawSeries(curve1, 0, 10);

//    sleep(5);


//        pixmap.save( "/opt/scca/drawlines.png" );

}

void MainWindow::paintEvent(QPaintEvent *e){




    //    QPainter painter(this);
    //    QPen pointpen(Qt::black);
    //    pointpen.setWidth(6);

    //    QPen linePen(Qt::red);
    //    linePen.setWidth(2);

    //    QPoint p1;
    //    p1.setX(10);
    //    p1.setY(10);

    //    QPoint p2;
    //    p2.setX(100);
    //    p2.setY(100);

    //    painter.setPen(linePen);

    //    painter.drawLine(p1,p2);

    //    painter.setPen(pointpen);
    //    painter.drawPoint(p1);
    //    painter.drawPoint(p2);

    //    painter.setPen(linePen);

    //    painter.drawRect(200,200,100,100);

    //    QRectF target(10.0, 20.0, 80.0, 60.0);
    //    QRectF source(0.0, 0.0, 48, 48);
    //    QImage image("opt/scca/cbchecked.png");

    //    painter.drawImage(target, image, source);


    //    QPainter p(this);
    //    p.setWindow(0,0,371,700);
    ////    QBrush backBrush(Qt::yellow,Qt::SolidPattern);
    ////    p.setBrush(backBrush);
    //    QColor windowColor(Qt::blue);        // a light blue color

    //    QBrush brush( Qt::yellow, Qt::SolidPattern );
    //       brush.setColor( windowColor );              // set this brush color
    //       p.setBrush( brush );                       // set brush
    //       p.drawRect( 10, 10, 350, 400 );             // car window



    //       p.drawLines(myPoints);


    //    QPen linepen(Qt::green);

    //    linepen.setWidth(20);
    ////   p.setPen(Qt::blue);
    //    p.setPen(linepen);
    //   p.drawLine(10,10, 40, 40);
    //   p.end();
    //   QLabel label;
    //   label.setPixmap(px);
    //   label.show();
    //    painter.drawLine(10,10,100,100);
}

void MainWindow::on_pushButton_clicked(){
    QPixmap::grabWidget(ui->qwtPlot->window(),12,0,370,330).save("/opt/scca/aaa.bmp");
//    QPixmap::grabWindow(ui->qwtPlot->winId(),0,0,371,380).save("/opt/scca/aaa.bmp");
    QString fname = "/opt/scca/aaa.bmp";
    QImage bmpImage(fname);

//    QImage result = bmpImage;
//    result.fill(255);
//    for(int x=0; x<bmpImage.width(); x++)
//        for(int y=0; y<bmpImage.height(); y++)
//            result.setPixel(x, y, qGray(bmpImage.pixel(x, y))>200?qRgb(255, 255, 255):qRgb(0, 0, 0));

//    bmpImage = result;

//    bmpImage = bmpImage.convertToFormat(QImage::Format_Mono,Qt::MonoOnly);

//    bmpImage = bmpImage.scaledToWidth(340,Qt::SmoothTransformation);
//    bmpImage.save("/opt/scca/bbb.bmp");

//    bmpImage = bmpImage.convertToFormat(QImage::Format_Mono);

    QImage result(370,330,QImage::Format_Mono);
    result.fill(0);
    for(int x=0; x<bmpImage.width(); x++)
        for(int y=0; y<bmpImage.height(); y++)
            result.setPixel(x, y, qGray(bmpImage.pixel(x, y))>200?0:1);

    qDebug()<< "depth: " << result.depth();

    result = result.mirrored(0,1);
    result.save("/opt/scca/ccc.bmp");

//    bmpImage.invertPixels(QImage::InvertRgb);
//    bmpImage.InvertRgb()
//    bmpImage = bmpImage.mirrored(0,1);
//    qDebug()<< "depth: " << bmpImage.depth();
//    bmpImage.save("/opt/scca/ccc.bmp");

//    QBitmap bmap;
//    QImage a("/opt/scca/ccc.bmp");
//    bmap = QBitmap::fromImage(a,Qt::MonoOnly);
//    qDebug() << "status:" << bmap.save("/opt/scca/ddd.bmp","BMP",100);

//    QBitmap bmap("/opt/scca/ccc.bmp",Qt::MonoOnly);
//    bmap.save("/opt/scca/ddd.bmp",Qt::,100);
}
