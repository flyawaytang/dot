/*
* This file is part of DOT.
*
*     DOT is free software: you can redistribute it and/or modify
*     it under the terms of the GNU General Public License as published by
*     the Free Software Foundation, either version 3 of the License, or
*     (at your option) any later version.
*
*     DOT is distributed in the hope that it will be useful,
*     but WITHOUT ANY WARRANTY; without even the implied warranty of
*     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*     GNU General Public License for more details.
*
*     You should have received a copy of the GNU General Public License
*     along with DOT.  If not, see <http://www.gnu.org/licenses/>.
*
* Copyright 2011-2013 dothub.org
*/

/*
 * HostAttachment.h
 *
 *  Created on: 2013-08-12
 *      Author: ar3roy
 */

#ifndef HOSTATTACHMENT_H_
#define HOSTATTACHMENT_H_
#include <string>
#include "Hosts.h"
#include "Configurations.h"
#include "CommandExecutor.h"
#include "InputTopology.h"
#include "Mapping.h"

using namespace std;

class HostAttachment {

protected:
	Configurations* globalConf;
	Hosts* hosts;
	CommandExecutor* commandExec;
	Mapping* mapping;
	InputTopology* topology;

	virtual void createHost2SwitchAttachmentConf()=0;
	virtual void loadConfiguration(string fileName)=0;
public:
	HostAttachment(Configurations* globalConf, Hosts* hosts, CommandExecutor* commandExec, 	InputTopology * topology, Mapping* mapping);

	virtual void startHost()=0;



	virtual ~HostAttachment();
};

#endif /* HOSTATTACHMENT_H_ */
