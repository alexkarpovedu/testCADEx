#define _USE_MATH_DEFINES

#include "helix.h"
#include <iostream>
#include <math.h>

helix::helix(const helix &hel)
{
	type = 4;
	visible = hel.visible;
	radius = hel.radius;
	h = hel.h;
}

double helix::set_radius()
{
	return radius;
}

double helix::set_h()
{
	return h;
}

void helix::get_radius(double r)
{
	try
	{
		if (r > 0)radius = r;
		else throw - 1;//again exception
	}
	catch (int i)
	{
		std::cout << "Uncorrect input" << std::endl;
	}
}

void helix::get_h(double h)
{
	try
	{//and again
		if (h > 0)h = h;
		else throw - 1;
	}
	catch (int i)
	{
		std::cout << "Uncorrect input" << std::endl;
	}
}

helix& helix::operator=(const helix &hel)
{
	type = 4;
	visible = hel.visible;
	radius = hel.radius;
	h = hel.h;
	return *this;
}

point helix::curve(double t)
{
	return point(radius*cos(t), radius*sin(t), h*t / (2 * M_PI));
}

point helix::deriv(double t)
{
	return point(-1 * radius*sin(t), radius*cos(t), h / (2 * M_PI));
}


//helix::~helix()
//{
//}
