/*
 * Person.h
 *
 *  Created on: 2013-4-26
 *      Author: lvniqi
 */
/* ����һ��person�ࡣ
��1���������ݳ�Ա���ַ�ָ�����͵�name��Ҫ��̬����name����
��2��������Ա������û�в���constructor��һ��������constructor��copy constructor��destructor�����������ĺ���GetName��
*/
#ifndef PERSON_H_
#define PERSON_H_
#include<cstring>
#include<iostream>
using namespace std;
class Person
{
public:
	Person(void);//�޲ι���
	Person(char* name);//�вι���
	Person(const Person &);//���ƹ���
	char* GetName(void) const;//�������
	void operator = (const Person &);//���صȺ������
	~Person(void){cout<<"Person was delete!"<<endl;delete [] Name;}//����
	friend ostream& operator << (ostream&,const Person&);//������������
private:
	char* Name;
};
#endif /* PERSON_H_ */
