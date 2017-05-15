#include <CppUTest/CommandLineTestRunner.h>

TEST_GROUP(FirstTestGroup){};

TEST(FirstTestGroup, SecondTest)
{
    STRCMP_EQUAL("hello", "world");
}
