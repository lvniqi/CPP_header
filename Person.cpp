/*
 * Person.cpp
 *
 *  Created on: 2013-4-26
 *      Author: lvniqi
 */
/* 定义一个person类。
（1）包含数据成员：字符指针类型的name（要求动态生成name）。
（2）包含成员函数：没有参数constructor，一个参数的constructor，copy constructor，destructor。返回姓名的函数GetName。
*/
#include"Person.h"
Person::Person(char* name)//有参构造
{
	cout<<"Person was created!"<<endl;
	Name=new char[strlen(name)+1];
	strcpy(Name,name);
}
Person::Person(void)//无参构造
{
	cout<<"Person was created!"<<endl;
	Name=new char[5];
	strcpy(Name,"None");
}
Person::Person(const Person& P)//复制构造
{
	cout<<"Person was created!"<<endl;
	Name=new char[strlen(P.Name)+1];
	strcpy(Name,P.Name);
}
char* Person::GetName(void) const//获得名字
{
	return Name;
}
void Person::operator=(const Person &P)//重载等号运算符
{
	delete [] Name;
	Name=new char[strlen(P.Name)+1];
	strcpy(Name,P.Name);
}
ostream& operator <<(ostream& output,const Person& P)
{
	output<<"Name:\t"<<P.Name<<endl;
	return output;
}
