#ifndef _LINE_H_
#define	_LINE_H_
# include<iostream>
# include<cmath>
# include"point.h"
using namespace std;
class Line
{
public:
	Line(const Point &p1,const Point &p2);
	Line(){};
	friend double Distance(const Point& p, const Line l);
	Line(const Line &p);
	double len();
	double operator* (const Line &p) const ;
	friend istream & operator>> (istream &input,Line &a);
	friend ostream & operator<< (ostream &output, const Line &a);
private:
	Point P1,P2;
};
#endif