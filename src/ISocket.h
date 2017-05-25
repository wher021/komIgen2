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
	virtual int createSocket(int arg) = 0;
};



#endif /* SRC_ISOCKET_H_ */
