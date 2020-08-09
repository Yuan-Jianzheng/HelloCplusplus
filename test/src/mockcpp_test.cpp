#include "gtest/gtest.h"
#include "mockcpp/mockcpp.h"
#include "mockcpp/mokc.h"
#include <sys/vfs.h>
#include <error.h>
#include <string>
#include <iostream>

using std::cout;
using std::endl;

static int statfsInvokeNum = 0;

int stub_statfs(const char *filePath, struct statfs *buf) {
    ++statfsInvokeNum;
    return 0;
}

TEST(mockcppTest, test_mock_cpp) {
    MOCKER(statfs).stubs().will(invoke(stub_statfs));
    struct statfs fsInfo;
    if (0 != statfs("/media/B", &fsInfo)) {
        cout<<"error: "<<strerror(errno)<<endl;
    } else {
        cout<<fsInfo.f_blocks<<endl;
    }
    ASSERT_EQ(1, statfsInvokeNum);
}
