#ifndef __POINT_H__
#define __POINT_H__

#include "fig.h"
#include <iostream>
using namespace std;

class point :	public fig
{//type of point is 1
protected:
	double x, y, z;//coordinates
	public:
	point() :fig(1,1), x(0), y(0), z(0){};
	point( int t,int v, double xc, double yc, double zc) :fig(t, v), x(xc), y(yc), z(zc){};
	point(double xc, double yc, double zc) :fig(1, 1), x(xc), y(yc), z(zc){};
	point(const point &p);
	double set_coordinates_X();
	double set_coordinates_Y();
	double set_coordinates_Z();
	void get_coordinates_X(double xc);
	void get_coordinates_Y(double yc);
	void get_coordinates_Z(double zc);
	virtual point& operator=(const point &f);
	virtual ~point();
	friend bool operator==(const point &p1, const point &p2);
	friend bool operator!=(const point &p1, const point &p2);
	friend ostream &operator<<(ostream &ostr, point &p);
	/////////nonsense///////////////
	//virtual double set_rad();
};

#endif;