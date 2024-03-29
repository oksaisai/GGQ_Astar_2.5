﻿
//#include "bgeometry.h"
#include "bgeometry.h"

namespace bgeo {


	PointVert::PointVert()
	{
	}

	PointVert::~PointVert()
	{
	}
	


	DLineString v2LineString(std::vector<double> &vx, std::vector<double> &vy)
	{
		DLineString dline;
		for (size_t i = 0; i < vx.size(); i++)
		{
			dline.push_back(DPoint(vx.at(i), vy.at(i)));
		}
		return dline;
	}
	//首尾需要相互连接
	DRing v2Ring(std::vector<double> const &vx, std::vector<double> const &vy)
	{
		DRing ring;
		for (size_t i = 0; i < vx.size(); i++)
		{
			ring.push_back(DPoint(vx.at(i), vy.at(i)));
		}
		return ring;
	}


	bool DPointEqual(DPoint const &a, DPoint const &b)
	{
		if (a.x()==b.x())
        {
			if (a.y()==b.y())
			{
				return true;
			}
		}
		return false;
	}

	VertexProperty::VertexProperty()
	{
	}
}

std::ostream & operator<<(std::ostream & out, bgeo::DPoint & pnt)
{
	// TODO: 在此处插入 return 语句
		out << "x = " << pnt.x() << " y = " << pnt.y() << std::endl;
		return out;
}

std::ostream & operator<<(std::ostream & out, bgeo::DRing & ring)
{
	// TODO: 在此处插入 return 语句
	for (size_t i = 0; i < ring.size(); i++)
		out << " " << ring[i].x() << " " << ring[i].y();
	out << std::endl;
	return out;
}
