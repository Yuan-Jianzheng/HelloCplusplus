# HelloCplusplus

程序：Hello World

IDE:VS Code

插件：C/C++、Code Runner、Native Debug、IntelliJ IDEA Keybindings、CMake、CMake tools

配置：使用launch.jssn和cmake来完成程序的编译、添加settings.json用户设计文件，并将项目保存成workspace

代码格式化：增加了代码格式化配置文件.clang-format(在Windows场景下此配置文件不能含有中文字符)

调试：进行上述配置后，先使用cmake进行编译后，就可直接进行调试操作

测试框架：使用google测试框架(gmock and gtest)，并将其作为动态库使用

用例：增加gtest测试套件支持

-std=c++11 -> -std=gnu++11 以满足cygwin中使用cmake的场景

