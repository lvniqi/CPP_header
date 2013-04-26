#ifndef _POINT_H_
#define	_POINT_H_
# include<iostream>
# include<cmath>
using namespace std;
class Point
{
public:
	Point(double x1=0,double y1=0);
	Point(const Point &p);
	double len();
	Point operator+ (const Point &x1) const ;
	Point operator- (const Point &x1) const ;
	double operator* (const Point &p) const ;
	double Getx(){return x;}
	double Gety(){return y;}
	void Setx(double x1){x=x1;}
	void Sety(double y1){y=y1;}
	friend class Triange;
	friend istream & operator >> (istream &input,Point &a);
	friend ostream & operator << (ostream &output, const Point &a);
private:
	double x,y;
};
#endif