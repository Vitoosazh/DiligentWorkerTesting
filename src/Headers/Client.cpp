#include "Client.h"

Client::Client() {}

void Client::Run() {
	interface = new Interface(this);
	interface->showStartScreen();
	Fl::lock;
}