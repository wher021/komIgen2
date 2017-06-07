#include "ISocket.h"
#include <iostream>
#include <winsock2.h>

#ifndef SRC
#define SRC

class TCPConnection
{
public:
	TCPConnection(ISocket *a_isocket)
	{
		m_isocket = a_isocket;
	}

	int connect(char *buffer)
	{
		unsigned long ulAddr = INADDR_NONE;
		ulAddr = inet_addr(buffer);

		return 0;
	}
	virtual int* sort(int *array)
	{
		//array[0]=99;
		//array[1]=95;
		//return array;
		int* shit;
		int res = m_isocket->puto(shit);
		if(*shit == 44)
		{

		}
		return shit;
	}


private:
	ISocket *m_isocket;
};

#endif
