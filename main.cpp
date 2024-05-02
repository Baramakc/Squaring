#include "widget.h"

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	Widget win(0);
	win.show();
	return app.exec();
}