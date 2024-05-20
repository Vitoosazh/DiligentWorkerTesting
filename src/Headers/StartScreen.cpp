#include "StartScreen.h"
#include "Client.h"

namespace startScreen {
	Client* client;
}

StartScreen::StartScreen(void* data) : Fl_Double_Window(300, 200, "DWT") {

	startScreen::client = (Client*)data;

	LogWorker = new Fl_Button(50, 50, 200, 30, "Начать тестирование");
	LogAdmin = new Fl_Button(50, 100, 200, 30, "Вход для администратора");
	LogAdmin->callback(LogAdminButton);
	this->end();
	
}

void LogAdminButton(Fl_Widget*, void*) {
	startScreen::client->interface->showLogAdmin();
	
}


