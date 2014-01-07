/*
 * CVirtualConnection.h
 *
 *  Created on: Dec 31, 2013
 *      Author: root
 */

#ifndef CVIRTUALCONNECTION_H_
#define CVIRTUALCONNECTION_H_

#include "CConnection.h"

class CVirtualConnection: public CConnection
{
public:
	CVirtualConnection();
	CUIPV4*& getGetwayAddress() {throw CException("missing implementation of get gateway in virtual connection");}
	virtual ~CVirtualConnection();
};

#endif /* CVIRTUALCONNECTION_H_ */
