#include "TestWindow.h"
#include "TestWindow2.h"


Window1::Window1() 

{
	win = new Fl_Window(500, 600, 300, 200, "DiligentWorkerTesting");
	Fl_Button* button = new Fl_Button(100, 100, 120, 30, "Открыть окно 2");
	button->callback(openWindow2, this);
	
}

void Window1::show() {
		
	win->show();
	Fl::run();
}
void Window1::hide()
{
	win->hide();
}

void Window1::openWindow2(Fl_Widget* widget, void* data) {

	Window1* window1 = (Window1*)data;

	Window2 window2;
	window1->hide();
	window2.show();
	
}
