#ifndef MESSAGE_MANAGER_H_
#define MESSAGE_MANAGER_H_

#include "message.h"

class MessageManager {
  public:
    std::string getMessage(Message* message) const;
};

#endif
