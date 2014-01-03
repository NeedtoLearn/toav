#ifndef TOAV_H
#define TOAV_H

#include <QtWidgets/QDialog>
#include "ui_toav.h"
#include <QtGui>
#include <QtCore>

const int w = 800;
const int h = 500;
const int a = 250;

class toav : public QDialog
{
	Q_OBJECT

public:
	toav(QWidget *parent = 0);
	~toav();
	void paintEvent(QPaintEvent *e);
	void draw(int x);

private:
	Ui::toavClass ui;
	int x;
};

#endif // TOAV_H
