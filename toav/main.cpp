#include "toav.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	toav win;
	win.setWindowTitle("TOAV");
	win.resize(w, h);
	win.show();
	return a.exec();
}
