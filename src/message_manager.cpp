#include "message_manager.h"

using std::string;

string MessageManager::getMessage(Message* message) const {
    return message->getMessage();
}