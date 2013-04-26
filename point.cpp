#include"Point.h"
//-------------------------------------------------------------
istream & operator >> (istream &input, Point &a)
{
	cout<<"请输入x,y:"<<endl;
	input>>a.x>>a.y;
	return input;
}
ostream & operator<< (ostream &output, const Point &a)
{
	output<<'('<<a.x<<','<<a.y<<')';
	return output;
}
Point::Point(double x1,double y1)
{
	x=x1,y=y1;
}
Point::Point(const Point &p)
{
	x=p.x,y=p.y;
}
Point Point::operator- (const Point &x1) const 
{
	return Point(x-x1.x,y-x1.y);
}
Point Point::operator+ (const Point &x1) const 
{
	return Point(x+x1.x,y+x1.y);
}
double Point::operator* (const Point &x1) const 
{
	return x*x1.x+y*x1.y;
}
double Point::len()
{
	return sqrt(x*x+y*y);
}
//-------------------------------------------------------------
