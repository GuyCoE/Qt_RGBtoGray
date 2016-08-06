#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <opencv/cv.h>
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/opencv.hpp"
#include "iostream"
using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
           Mat image;
           image = imread("D:/Work&Study/Project/coconut/145_259_060952/B_146.JPG", CV_LOAD_IMAGE_COLOR);

           if(! image.data )
           {
                  cout <<  "Could not open or find the image" << std::endl ;
           }

           // Create a new matrix to hold the gray image
           Mat gray;

           // convert RGB image to gray
           cvtColor(image, gray, CV_BGR2GRAY);

           namedWindow( "Display window", CV_WINDOW_AUTOSIZE );
           imshow( "Display window", image );

           namedWindow( "Result window", CV_WINDOW_AUTOSIZE );
           imshow( "Result window", gray );



}


