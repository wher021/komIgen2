/*
 * ISocket.h
 *
 *  Created on: 24 maj 2017
 *      Author: leons
 */

#ifndef SRC_ISOCKET_H_
#define SRC_ISOCKET_H_

class ISocket
{
public:
	virtual int connect(char *buffer) = 0;
	virtual int* sort(int *array) = 0;
	virtual void  hej(int h) = 0;
	virtual int puto(int *regular) = 0;
};



#endif /* SRC_ISOCKET_H_ */
