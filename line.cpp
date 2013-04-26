#include"line.h"
//-------------------------------------------------------------
istream & operator>> (istream &input,Line &a)
{
	cout<<"请输入线段：\nP1，P2:"<<endl;
	input>>a.P1>>a.P2;
	return input;
}
ostream & operator<< (ostream &output, const Line &a)
{
	output<<"P1:"<<a.P1<<endl<<"P2:"<<a.P2<<endl;
	return output;
}
Line::Line(const Point &p1,const Point &p2):P1(p1),P2(p2){};
Line::Line(const Line &p)
{
	P1=p.P1,P2=p.P2;
}
double Line::operator* (const Line &p) const 
{
	return (P2-P1)*(p.P2-p.P1);
}
double Line::len()
{
	return (P2-P1).len();
}
//-------------------------------------------------------------
double Distance(const Point& p, const Line l)
{
	Point temp1=l.P2-l.P1;
	Point temp2=p-l.P1;
	double Cos=(temp1*temp2)/(temp1.len()*temp2.len());
	cout<<p<<temp1<<temp2<<endl;
	double Sin=sqrt(1-Cos*Cos);
	return Sin*temp2.len();
}
//-------------------------------------------------------------