#include "LoginWorker.h"
#include "Client.h"

namespace logW {
	Client* client;
}

LoginWorker::LoginWorker(void* data) : Fl_Double_Window(300, 200, "лемч") {

	logW::client = (Client*)data;


}

