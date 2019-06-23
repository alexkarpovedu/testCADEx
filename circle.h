#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "point.h"
class circle : public point
{//type of circle is 2
protected:
	double radius;
	//Z-coordinate is null
public:
	circle() :point(2, 1, 0, 0, 1), radius(1){};
	circle(point c, double r) :point(c), radius(r){};
	circle(int t, int v, double x, double y, double r) :point(t, v, x, y, 0), radius(r){};
	circle(const circle &c);
	double set_rad();
	point set_centr();
	void get_rad(double r);
	void get_centr(point p);
	void get_centr(double xc, double yc);
	virtual point curve(double t);
	virtual point deriv(double t);
	virtual circle& operator=(const circle &f);
	friend bool operator<(const circle &p1, const circle &p2);//for radius
	friend bool operator>(const circle &p1, const circle &p2);//for radius
	virtual ~circle();
};

#endif;