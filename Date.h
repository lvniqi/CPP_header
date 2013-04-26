/*
 * Date.h
 *
 *  Created on: 2013-4-27
 *      Author: lvniqi
 */
#ifndef DATE_H_
#define DATE_H_
#include<iostream>
using namespace std;
class Date
{
	public:
	friend ostream& operator << (ostream&,const Date&);
	friend istream& operator >> (istream&,Date&);
	void operator = (const Date&);
	Date(void):Day(0),Year(0),Month(0){cout<<"Date was created!"<<endl;};
	Date(const Date &p):Day(p.Day),Year(p.Year),Month(p.Month){cout<<"Date was created!"<<endl;}
	~Date(void){cout<<"Date was delete!"<<endl;}
private:
	int Day,Year,Month;
};
#endif /* DATE_H_ */
