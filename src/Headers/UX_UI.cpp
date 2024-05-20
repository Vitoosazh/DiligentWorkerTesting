#include "UX_UI.h"

Interface::Interface(void * data) {

	screenKonstructor = new Konstructor(data);
	ss = new StartScreen(data);
	logUI = new LoginAdmin(data);
	menUI = new Menu(data);
	logWorker = new LoginWorker(data);
	testUI = new Testing(data);
	listTest = new ListTests(data);
	listResult = new ListResults(data);

	
}

void Interface::Hide() {
	screenKonstructor->hide();
	ss->hide();
	logUI->hide();
	menUI->hide();
	logWorker->hide();
	testUI->hide();
	listTest->hide();
	listResult->hide();
}

void Interface::showStartScreen() {
	Hide();
	ss->show();
}

void Interface::showLogAdmin() {
	Hide();
	logUI->show();
}

void Interface::showMenu() {
	Hide();
	menUI->show();
}

void Interface::showKonstructor() {
	Hide();
	screenKonstructor->show();
}

void Interface::showTesting() {
	Hide();
	testUI->show();
}

void Interface::showLoginWorker() {
	Hide();
	logWorker->show();
}

void Interface::showListResults() {
	Hide();
	listResult->show();
}

void Interface::showListTests() {
	Hide();
	listTest->show();
}