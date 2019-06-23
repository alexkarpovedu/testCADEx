#define _USE_MATH_DEFINES

#include <vector>
#include <map>
#include <random>
#include <ctime>
#include <algorithm>
#include <math.h>
#include <conio.h>
#include "fig.h"
#include "point.h"
#include "circle.h"
#include "ellipse.h"
#include "helix.h"

using namespace std;

void main()
{
	vector<fig> figures;
	//vector<fig*> circles;
	multimap<double, fig*> circles;
	vector<point> curves, derivatives;
	vector<point>::iterator it;
	/*vector<fig>::iterator it2;*/
	double tmp = M_PI / 4,sum_radius=0;
	std::mt19937 gen(time(0));
	uniform_int_distribution<int> uid(0, 100),uid2(2,4),uid3(0,1);//random number range is arbitrary
	uniform_real_distribution<double> urd(1, 50);
	int n = uid(gen);//length of figures
	int j = 1;//number
	cout << "generation" << endl;
	for (int i = 0; i <n; i++)
	{
		int t = uid2(gen);
		switch (t)
		{
		case 2:
		{
				  int visible = uid3(gen);
				  double x = urd(gen), y = urd(gen), radius = urd(gen);
				  circle temp = circle(t, visible, x, y, radius);
				  figures.push_back(temp);
				  circles.insert(pair<double, fig*>(temp.set_rad(), &figures.back()));
				  curves.push_back(temp.curve(tmp));
				  derivatives.push_back(temp.deriv(tmp));
				  sum_radius += temp.set_rad();
				  break;
		}
		case 3:
		{
				  int visible = uid3(gen);
				  double x = urd(gen), y = urd(gen), radius = urd(gen), radius2 = urd(gen);
				  ellipse temp = ellipse(visible, x, y, radius, radius2);
				  figures.push_back(temp);
				  curves.push_back(temp.curve(tmp));
				  derivatives.push_back(temp.deriv(tmp));
				  break;
		}
		case 4:
		{
				  int visible = uid3(gen);
				  double radius = urd(gen), h = urd(gen);
				  helix temp = helix(visible, radius, h);
				  figures.push_back(temp);
				  curves.push_back(temp.curve(tmp));
				  derivatives.push_back(temp.deriv(tmp));
				  break;
		}
		}
		uid2.reset();
		uid3.reset();
		urd.reset();
	}
	cout << "generation completed" << endl;
	cout << "Coordinates curves with t=PI/4 " << endl;
	for (it = curves.begin(); it != curves.end(); ++it ,j++)//
		cout << j << " " << *it;//
	_getch();
	j = 1;
	cout << "Coordinates derivatives with t=PI/4 " << endl;
	for (it = derivatives.begin(); it != derivatives.end(); ++it,j++)//, i++
		cout << j << " " << *it;//<< i
	_getch();
	j = 1;
	cout << "Circles with radius: " << endl;
	for (auto it2 = circles.begin(); it2 != circles.end(); ++it2, j++)
		cout << j << " " << it2->first << endl;
	_getch();
	cout << "Summ radius= " << sum_radius << endl;
	_getch();
}
