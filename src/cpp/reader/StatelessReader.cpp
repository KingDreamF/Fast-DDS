/*************************************************************************
 * Copyright (c) 2013 eProsima. All rights reserved.
 *
 * This copy of FastCdr is licensed to you under the terms described in the
 * EPROSIMARTPS_LIBRARY_LICENSE file included in this distribution.
 *
 *************************************************************************/

/*
 * StatelessReader.cpp
 *
 *  Created on: Feb 27, 2014
 *      Author: Gonzalo Rodriguez Canosa
 *      email:  gonzalorodriguez@eprosima.com
 *              grcanosa@gmail.com  	
 */

#include "eprosimartps/reader/StatelessReader.h"

namespace eprosima {
namespace rtps {



StatelessReader::~StatelessReader() {

	pDebugInfo("StatelessReader destructor"<<endl;);
}

StatelessReader::StatelessReader(const ReaderParams_t* param,uint32_t payload_size):
		RTPSReader(param->historySize,payload_size)
{
	//reader_cache.changes.reserve(param.historySize);
	m_stateType = STATELESS;
	//locator lists:
	unicastLocatorList = param->unicastLocatorList;
	multicastLocatorList = param->multicastLocatorList;
	expectsInlineQos = param->expectsInlineQos;
	topicKind = param->topicKind;
	m_topicName = param->topicName;
}


} /* namespace rtps */
} /* namespace eprosima */
