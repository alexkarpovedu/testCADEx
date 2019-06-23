#ifndef __FIG_H__
#define __FIG_H__
//#include <iostream>

class fig
{

protected:
	int type;//type of figure
	int visible;// visiblity of figure(0 or 1)

public:
	fig();
	fig(int t, int v);
	fig(const fig &f);
	int set_type();
	void get_type(int t);
	int is_visible();
	void on_visible();
	void off_visible();
	virtual fig& operator=(const fig &f);
	virtual ~fig();
	/////////nonsense///////////////
	//virtual double set_rad();
	//virtual bool operator<(fig &p2);
};

#endif;