#include <TCPconnection.h>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "ISocket.h"
#include "TCPconnection.h"

class MockSocket: public ISocket {
public:
	MOCK_METHOD1(connect, int(char* buffer));
	MOCK_METHOD1(sort, int*(int* array));
	MOCK_METHOD1 (hej, void(int h));
	MOCK_METHOD1 (puto, int(int *regular));
};

class MockTCPConnectionTest: public ::testing::Test {
public:
	MockTCPConnectionTest() {
	}

};


//using::testing::_;
TEST_F(MockTCPConnectionTest, shouldreturnzerpifnotinitialized) {
	/*
	MockSocket mockSocket;

	TCPConnection tcpConnection(&mockSocket);

	int array[5] = {1,2,3,4,5};
	//EXPECT_CALL(mockSocket, hej(::testing::An<int>())).Times(1);
	//EXPECT_CALL(mockSocket, hej(::testing::_)).Times(1);
	int *returnedArray = tcpConnection.sort(array);

	ASSERT_EQ(9 ,returnedArray[0]);
	*/
}

TEST_F(MockTCPConnectionTest, shouldf) {
	MockSocket mockSocket;

	TCPConnection tcpConnection(&mockSocket);

	int array[5] = {1,2,3,4,5};
	EXPECT_CALL(mockSocket, puto(::testing::An<int*>())).WillOnce(DoAll(testing::SetArgPointee<0>(5),
            testing::Return(33)));


	//EXPECT_CALL(mockSocket, hej(::testing::_)).Times(1);
	int *returnedArray = tcpConnection.sort(array);

	ASSERT_EQ(44 , *returnedArray);

}

