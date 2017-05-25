#include "gtest/gtest.h"
#include "MyClass.h"
#include "gmock/gmock.h"

#include "turtle.h"
#include "painter.h"
#include "ISocket.h"
#include "Socket.h"

class MockTurtle : public Turtle {
 public:

  MOCK_METHOD0(PenUp, void());
  MOCK_METHOD0(PenDown, void());
  MOCK_METHOD1(Forward, void(int distance));
  MOCK_METHOD1(Turn, void(int degrees));
  MOCK_METHOD2(GoTo, void(int x, int y));
  MOCK_CONST_METHOD0(GetX, int());
  MOCK_CONST_METHOD0(GetY, int());
  MOCK_METHOD0(solong, void());
};

class MockSocket : public ISocket
{
public:
	  MOCK_METHOD1(createSocket, int(int arg));
};


class SocketTester: public ::testing::Test
{
	protected:
	MyClass m;

};

TEST_F(SocketTester, Test1)
{
	MockSocket mocksocket;

	int myvar = 3;

	Socket socket(&mocksocket);

	EXPECT_CALL(mocksocket, createSocket(2))
        .Times(1).WillRepeatedly(testing::Return(44));

	int shit = socket.init();
	ASSERT_EQ(0,shit);

}


using ::testing::AtLeast;
TEST(PainterTest, CanDrawSomething)
{
  MockTurtle turtle;
  //EXPECT_CALL(turtle, PenDown())
    //  .Times(AtLeast(1));
  EXPECT_CALL(turtle, PenDown())
        .Times(1);

  Painter painter(&turtle);

  EXPECT_TRUE(painter.DrawCircle(0, 0, 10));
}

