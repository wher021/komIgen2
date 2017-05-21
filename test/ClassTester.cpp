#include "gtest/gtest.h"
#include "MyClass.h"

class ClassTester: public ::testing::Test
{
	protected:
	MyClass m;

};

TEST_F(ClassTester, Test1)
{
	ASSERT_TRUE(true);
}

TEST_F(ClassTester, Test2)
{
	ASSERT_EQ(m.getZero(), 0);
}
