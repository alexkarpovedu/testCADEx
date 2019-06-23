#ifndef __ELLIPSE_H__
#define __ELLIPSE_H__

#include "circle.h"
class ellipse :
	public circle
{//type of ellipse is 3
private:
	double  radius2;

public:
	ellipse() :circle(3,1,0,0,1), radius2(1){};
	ellipse(point c, double r, double r2) :circle(c, r), radius2(r2){};
	ellipse(int v, double x, double y, double r, double r2) :circle(3, v, x, y, r), radius2(r2){};
	ellipse(const ellipse &el);
	double set_rad();
	double set_rad2();
	point set_centr();
	void get_rad(double r);
	void get_rad2(double r);
	void get_centr(point p);
	void get_centr(double x, double y);
	ellipse& operator=(const ellipse &f);
	point curve(double t);
	point deriv(double t);
	/*virtual ~ellipse();*/
};

#endif;

