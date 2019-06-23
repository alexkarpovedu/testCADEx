#include "point.h"


//point::point()
//{
//
//	x = 0;
//	y = 0;
//	z = 0;
//}

//point::point(double xc, double yc, double zc)
//{//not sure if it'll be involved
//	x = xc;
//	y = yc;
//	z = zc;
//}

point::point(const point &p)
{//not sure if it'll be involved
	type = p.type;
	visible = p.visible;
	x = p.x;
	y = p.y;
	z = p.z;
}

double point::set_coordinates_X()
{
	return x;
}

double point::set_coordinates_Y()
{
	return y;
}

double point::set_coordinates_Z()
{
	return z;
}

void point::get_coordinates_X(double xc)
{
	x = xc;
}

void point::get_coordinates_Y(double yc)
{
	y = yc;
}

void point::get_coordinates_Z(double zc)
{
	z = zc;
}

point& point::operator=(const point &f)
{//not sure if it'll be involved
	x = f.x;
	y = f.y;
	z = f.z;
	return *this;
}

bool operator==(const point &p1, const point &p2)
{
	return (p1.type == 1 && p2.type == 1 && p1.visible == p2.visible&&p1.x == p2.x&&p1.y == p2.y&&p1.z == p2.z);
}

bool operator!=(const point &p1, const point &p2)
{
	return !(p1 == p2);
}

ostream &operator<<(ostream &ostr, point &p)
{
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	ostr << "x=" << p.set_coordinates_X() << ", y=" << p.set_coordinates_Y() << ", z=" << p.set_coordinates_Z();
	ostr << std::endl;
	return ostr;
}
//
/////////nonsense///////////////
//double point::set_rad()
//{
//	return 0;
//}

point::~point()
{
}
