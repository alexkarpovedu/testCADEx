#ifndef __HELIX_H__
#define __HELIX_H__
#include "fig.h"
#include "point.h"
class helix :
	public fig
{
private:
	double radius, h;
	//type of ellipse is 4
public:
	helix() :fig(4, 1), radius(1), h(1){};
	helix(int v, double r, double h):fig(4, v), radius(r), h(h){};
	helix(const helix &hel);
	double set_radius();
	double set_h();
	void get_radius(double radius);
	void get_h(double h);
	helix& operator=(const helix &hel);
	point curve(double t);
	point deriv(double t);
	/*virtual ~helix();*/
};

#endif;
