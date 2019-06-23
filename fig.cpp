#include "fig.h"
#include <iostream>


fig::fig()
{
	type = 0;
	visible = 1;
}

fig::fig(int t,int v)
{//not sure if it'll be involved
	type = t;
	visible = v;
}

fig::fig(const fig &f)
{
	type = f.type;
	visible = f.visible;
}

int fig::set_type()
{
	return type;
}

void fig::get_type(int t)
{//exception for validating input data... not sure...
	try
	{
		if (t >= 0)type = t;
		else throw - 1;
	}
	catch (int i)
	{
		std::cout << "Uncorrect input " << std::endl;
	}
}

int fig::is_visible()
{
	return visible;
}

void fig::on_visible()
{
	visible = 1;
}

void fig::off_visible()
{
	visible=0;
}

fig& fig::operator=(const fig &f)
{//not sure if it'll be involved
	type = f.type;
	visible = f.visible;
	return *this;
}

//double fig::set_rad()
//{
//	return - 1;
//}
//
//bool fig::operator<(fig &p2)
//{
//	return false;
//}

fig::~fig()
{
}
