#include "Menu.h"
#include "Client.h"

namespace menu {
	Client* client;
}

Menu::Menu(void* data) : Fl_Double_Window(300, 200, "����") {

	menu::client = (Client*)data;

	InKonstructor = new Fl_Button(50, 50, 200, 30, "����������� ������");
	InKonstructor->callback(toKonstructor);
	InListTests = new Fl_Button(50, 100, 200, 30, "������ ������");
	InListTests->callback(toListTests);
	InListResults = new Fl_Button(50, 150, 200, 30, "������ �����������");
	InListResults->callback(toListResults);
	
}

void toKonstructor(Fl_Widget*, void*) {
	menu::client->interface->showKonstructor();

}

void toListTests(Fl_Widget*, void*) {
	menu::client->interface->showKonstructor();

}

void toListResults(Fl_Widget*, void*) {
	menu::client->interface->showKonstructor();

}