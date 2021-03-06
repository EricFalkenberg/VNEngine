
#pragma once

#include "Action.h"
#include "Response.h"
#include <string>

namespace vngine {
namespace dialogue {

class Conversation {
public:
	Conversation(Script& s);
	~Conversation();

	Response& prompt();
	void respond(Action& a);

private:
	Script script;
};

}
}
