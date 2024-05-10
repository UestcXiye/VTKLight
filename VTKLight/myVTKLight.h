#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_myVTKLight.h"

#include <QVTKOpenGLNativeWidget.h>

class myVTKLight : public QMainWindow
{
	Q_OBJECT

public:
	myVTKLight(QWidget* parent = nullptr);
	~myVTKLight();

private:
	Ui::myVTKLightClass ui;

	QVTKOpenGLNativeWidget* _pVTKWidget = nullptr;
};
