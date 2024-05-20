#include "ListResults.h"
#include "Client.h"

namespace lResult {
	Client* client;
}

ListResults::ListResults(void* data) : Fl_Double_Window(300, 200, "лемч") {

	lResult::client = (Client*)data;

	

}



