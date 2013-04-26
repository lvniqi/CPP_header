/*
 * Date.cpp
 *
 *  Created on: 2013-4-27
 *      Author: lvniqi
 */
#include"Date.h"
ostream& operator << (ostream& output,const Date& p)
{
	output<<"Year:\t"<<p.Year<<"\tMonth:\t"<<p.Month;
	output<<"\tDay:\t"<<p.Day<<endl;
	return output;
}
istream& operator >> (istream& input,Date& p)
{
	cout<<"Year:?"<<endl;
	input>>p.Year;
	cout<<"Month:?"<<endl;
	input>>p.Month;
	cout<<"Day:?"<<endl;
	input>>p.Day;
	return input;
}

