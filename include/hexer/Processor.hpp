/*****************************************************************************

    (c) 2013 Hobu, Inc. hobu.inc@gmail.com

    Author: Andrew Bell andrew.bell.ia at gmail.com

    This is free software; you can redistribute and/or modify it under the
    terms of the GNU Lesser General Licence as published by the Free Software
    Foundation. See the COPYING file for more information.

    This software is distributed WITHOUT ANY WARRANTY and without even the
    implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

*****************************************************************************/

#pragma once

#include <boost/function.hpp>
#include <vector>

#include "GridInfo.hpp"
#include "Path.hpp"
#include "export.hpp"

namespace hexer
{
    typedef boost::function<bool(double&, double&, void*&)> PointReader;
    typedef boost::function<bool(int&, int&, void*&)> HexReader;

    HEXER_DLL void process(const std::vector<GridInfo *>& infos, PointReader);
    HEXER_DLL void processHexes(const std::vector<GridInfo *>& infos, HexReader);
    
    HEXER_DLL double computeHexSize(const std::vector<Point>& samples, int density);
} // namespace hexer
