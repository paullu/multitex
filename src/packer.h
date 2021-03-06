/* 
 *  Copyright (c) 2015-2016  Rafael Pagés (rps (at) gti.ssr.upm.es)
 *    and Universidad Politécnica de Madrid
 *
 *  This file is part of Multitex
 *
 *  Multitex is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  Multitex is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 */

#ifndef PACKER_H
#define PACKER_H

#include "chart.h"

struct Contour{
	float y, x1, x2;
};

class Packer {

public:

	static void pack(std::vector<Chart>& _charts, float& _width, float& _height);

};


#endif // PACKER_H
