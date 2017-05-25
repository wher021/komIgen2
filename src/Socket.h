/*
 * Socket.h
 *
 *  Created on: 24 maj 2017
 *      Author: leons
 */

#ifndef SRC_SOCKET_H_
#define SRC_SOCKET_H_


class Socket : public ISocket
{
public:
	Socket();
	Socket(ISocket *tst)
	{
		isocket = tst;
	}
	int init()//(ISocket *tst)
	{
		int mynr = isocket->createSocket(2);
		return mynr;
	};
	void init(ISocket *shit)
	{

	}
	int createSocket(int arg)
	{
		printf("Hi");
		return 0;
	}
private:
	ISocket *isocket;
};


#endif /* SRC_SOCKET_H_ */
