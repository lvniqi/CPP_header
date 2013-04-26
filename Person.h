/*
 * Person.h
 *
 *  Created on: 2013-4-26
 *      Author: lvniqi
 */
/* 定义一个person类。
（1）包含数据成员：字符指针类型的name（要求动态生成name）。
（2）包含成员函数：没有参数constructor，一个参数的constructor，copy constructor，destructor。返回姓名的函数GetName。
*/
#ifndef PERSON_H_
#define PERSON_H_
#include<cstring>
#include<iostream>
using namespace std;
class Person
{
public:
	Person(void);//无参构造
	Person(char* name);//有参构造
	Person(const Person &);//复制构造
	char* GetName(void) const;//获得名字
	void operator = (const Person &);//重载等号运算符
	~Person(void){cout<<"Person was delete!"<<endl;delete [] Name;}//析构
	friend ostream& operator << (ostream&,const Person&);//重载输出运算符
private:
	char* Name;
};
#endif /* PERSON_H_ */
