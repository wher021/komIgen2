#include "gtest/gtest.h"
#include "MyClass.h"
#include "gmock/gmock.h"

#include "turtle.h"
#include "painter.h"

class MockTurtle : public Turtle {
 public:

  MOCK_METHOD0(PenUp, void());
  MOCK_METHOD0(PenDown, void());
  MOCK_METHOD1(Forward, void(int distance));
  MOCK_METHOD1(Turn, void(int degrees));
  MOCK_METHOD2(GoTo, void(int x, int y));
  MOCK_CONST_METHOD0(GetX, int());
  MOCK_CONST_METHOD0(GetY, int());
};


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

using ::testing::AtLeast;
TEST(PainterTest, CanDrawSomething)
{
  MockTurtle turtle;
  //EXPECT_CALL(turtle, PenDown())
    //  .Times(AtLeast(1));
  EXPECT_CALL(turtle, PenDown())
        .Times(4);

  Painter painter(&turtle);

  EXPECT_TRUE(painter.DrawCircle(0, 0, 10));
}
