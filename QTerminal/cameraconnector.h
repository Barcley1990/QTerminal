#ifndef CAMERACONNECTOR_H
#define CAMERACONNECTOR_H

#include <QObject>
//#include <Camera.h>
//#include <ICameraListObserver.h>
//#include <VimbaSystem.h>

class CameraConnector : public QObject
{
    Q_OBJECT
public:
    explicit CameraConnector(QObject *parent = 0);
    ~CameraConnector();

    void ListingAvailableCameras();

signals:

public slots:
};

#endif // CAMERACONNECTOR_H
