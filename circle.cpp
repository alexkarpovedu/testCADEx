#include "circle.h"
#include <iostream>

//circle::circle()
//{
//	centr = point(2,1,0,0,1);
//	radius = 1;
//}
//
//circle::circle(int t,int v,double x, double y, double r)
//{
//	centr = point(t,v,x, y, 0);
//	radius = r;
//}

//circle::circle(point c, double r)
//{
//	centr = c;
//	radius = r;
//}

circle::circle(const circle &c)
{
	type = c.type;
	visible = c.visible;
	x = c.x;
	y = c.y;
	z = c.z;
	radius = c.radius;
}

double circle::set_rad()
{
	return radius;
}

point circle::set_centr()
{
	return point(type,visible,x,y,z);
}

void circle::get_rad(double r)
{
	try{
	if (r>0 )radius = r;
	else throw - 1;//again exception for validating data...
}
	catch (int i)
	{
		std::cout << "Uncorrect input" << std::endl;
	}
}

void circle::get_centr(point p)
{
	x = p.set_coordinates_X();
	y = p.set_coordinates_Y();
	z = p.set_coordinates_Z();
}

void circle::get_centr(double xc, double yc)
{
	x=xc;
	y = yc;
}

point circle::curve(double t)
{
	return point(radius*cos(t) - x, radius*sin(t) - y, 0);
}

point circle::deriv(double t)
{
	return point(-1 * radius*sin(t), radius*cos(t), 0);
}

circle& circle::operator=(const circle &f)
{
	type = f.type;
	visible = f.visible;
	x = f.x;
	y = f.y;
	z = f.z;
	radius = f.radius;
	return *this;
}

bool operator<(const circle &p1, const circle &p2)//for radius
{
	return (p1.radius < p2.radius);
}

bool operator>(const circle &p1, const circle &p2)//for radius
{
	return (p1.radius > p2.radius);
}

circle::~circle()
{
}
