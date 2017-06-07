/*
 * Socket.h
 *
 *  Created on: 24 maj 2017
 *      Author: leons
 */

#ifndef SRC_SOCKET_H_
#define SRC_SOCKET_H_

#include <winsock2.h>

class Socket : public ISocket
{
public:
	Socket();
	Socket(ISocket *a_isocket)
	{
		m_isocket = a_isocket;
	}
	virtual int connect(char *buffer)
	{

	}
	virtual int* sort(int *array)
	{
		array[0]=99;
		array[1]=95;
		return array;
	}
	virtual void hej(int h)
	{
	}
	virtual int puto(int *regular)
	{
		return 0;


	}

private:
	ISocket *m_isocket;
};


#endif /* SRC_SOCKET_H_ */
