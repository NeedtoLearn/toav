#include "toav.h"
#include <conio.h>

toav::toav(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	x = 1;
}

void toav::paintEvent(QPaintEvent *e){
	
	
}

void toav::draw(int x){
	QPainter painter(this);
	QRect rect(w/2-a/2, h/2-a*x/2, a, a);
	QRect stimuli(w/2-a/8, h/2+a/8, a/4, a/4);
	QPen pen(Qt::black);
	QBrush bkgrd(Qt::black, Qt::SolidPattern);

	painter.setPen(pen);
	painter.fillRect(rect, bkgrd);
	painter.drawRect(rect);
	
	painter.fillRect(stimuli, Qt::white);
	painter.drawRect(stimuli);
}

toav::~toav()
{

}
