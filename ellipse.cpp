#include "ellipse.h"
#include <iostream>

ellipse::ellipse(const ellipse &el)
{
	type = 3;
	visible = el.visible;
	x = el.x;
	y = el.y;
	z = 0;
	radius = el.radius;
	radius2 = el.radius2;
}


double ellipse::set_rad()
{
	return circle::set_rad();
}

double ellipse::set_rad2()
{
	return radius2;
}

point ellipse::set_centr()
{
	return circle::set_centr();
}

void ellipse::get_rad(double r)
{
	circle::get_rad(r);
}

void ellipse::get_rad2(double r)
{
	try{
		if (r>0)radius2 = r;
		else throw - 1;//again exception for validating data...
	}
	catch (int i)
	{
		std::cout << "Uncorrect input" << std::endl;
	}
}

void ellipse::get_centr(point p)
{
	circle::get_centr(p);
}

void ellipse::get_centr(double x, double y)
{
	circle::get_centr(x, y);
}

ellipse& ellipse::operator=(const ellipse &f)
{
	type = 3;
	visible = f.visible;
	x = f.x;
	y = f.y;
	z = f.z;
	radius = f.radius;
	radius2 = f.radius2;
	return *this;
}

point ellipse::curve(double t)
{
	return point(radius*cos(t) - x, radius2*sin(t) - y, 0);
}

point ellipse::deriv(double t)
{
	return point(-1 * radius*sin(t), radius2*cos(t), 0);
}

//ellipse::~ellipse()
//{
//}
