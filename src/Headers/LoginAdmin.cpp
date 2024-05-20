#include "LoginAdmin.h"
#include "Client.h"

namespace logAdminWindow {
	Client* client;
}

LoginAdmin::LoginAdmin(void* data) : Fl_Double_Window(300, 200, "Вход") {

	logAdminWindow::client = (Client*)data;
		
	passwordInput = new Fl_Input(100, 50, 120, 25, "Пароль:");
	LogA = new Fl_Button(100, 100, 120, 25, "Войти");
	LogA->callback(LogAMenu);
	this->end();
}

void LogAMenu(Fl_Widget*, void*) {
	const char* password = logAdminWindow::client->interface->logUI->passwordInput->value();
	if (strcmp(password, "admin") == 0) {
				
		logAdminWindow::client->interface->showMenu();

	}
	else {
		
		logAdminWindow::client->interface->logUI->passwordInput->value("");
	}
	
}
