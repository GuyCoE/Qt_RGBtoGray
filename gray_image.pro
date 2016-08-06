#-------------------------------------------------
#
# Project created by QtCreator 2015-09-22T01:55:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gray_image
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


INCLUDEPATH += C:\\openCV2410\\opencv\\build\\include
LIBS += -LC:\\openCV2410\\mybuild\\lib\\Debug \
        -lopencv_calib3d2410d \
        -lopencv_contrib2410d \
        -lopencv_core2410d \
        -lopencv_features2d2410d \
        -lopencv_flann2410d \
        -lopencv_gpu2410d \
        -lopencv_haartraining_engined \
        -lopencv_highgui2410d \
        -lopencv_imgproc2410d \
        -lopencv_legacy2410d \
        -lopencv_ml2410d \
        -lopencv_nonfree2410d \
        -lopencv_objdetect2410d \
        -lopencv_ocl2410d \
        -lopencv_photo2410d \
        -lopencv_stitching2410d \
        -lopencv_superres2410d \
        -lopencv_ts2410d \
        -lopencv_video2410d \
        -lopencv_videostab2410d
