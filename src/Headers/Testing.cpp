#include "Testing.h"
#include "Client.h"

namespace testing {
	Client* client;
}

Testing::Testing(void* data) : Fl_Double_Window(300, 200, "лемч") {

	testing::client = (Client*)data;

	
}

