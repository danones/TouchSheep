// This file is part of TouchSheep.
// 
//     TouchSheep is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.
// 
//     TouchSheep is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.
// 
//     You should have received a copy of the GNU General Public License
//     along with TouchSheep.  If not, see <http://www.gnu.org/licenses/>.

#ifndef TSEVENT_H
#define TSEVENT_H

#include <list>
#include <stdio.h>

#include "TSKernel.h"

#include "TSMarker.h"

class TSEvent
{
public:
	TSEvent ();
	virtual ~TSEvent ();
	
	IplImage *img;
	std::list<TSMarker*> tsMarkerList;
};

#endif