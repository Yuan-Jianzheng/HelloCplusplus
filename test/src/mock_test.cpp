#include "gmock/gmock.h"
#include "gtest/gtest.h"

#include "message.h"
#include "message_manager.h"
using std::string;

class MockMessage : public Message {
  public:
    MOCK_CONST_METHOD0(getMessage, string());
};

TEST(mockMessageTest, getMessage) {
    MockMessage message;
    string msg = "Hello World!";
    
    EXPECT_CALL(message, getMessage()).WillRepeatedly(testing::Return(testing::ByRef(msg)));

    MessageManager messageManager;
    EXPECT_EQ("Hello World!", messageManager.getMessage(&message));
    EXPECT_EQ("Hello World!", messageManager.getMessage(&message));
    EXPECT_EQ("Hello World!", messageManager.getMessage(&message));
}