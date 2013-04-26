/*
 * Person.cpp
 *
 *  Created on: 2013-4-26
 *      Author: lvniqi
 */
/* ����һ��person�ࡣ
��1���������ݳ�Ա���ַ�ָ�����͵�name��Ҫ��̬����name����
��2��������Ա������û�в���constructor��һ��������constructor��copy constructor��destructor�����������ĺ���GetName��
*/
#include"Person.h"
Person::Person(char* name)//�вι���
{
	cout<<"Person was created!"<<endl;
	Name=new char[strlen(name)+1];
	strcpy(Name,name);
}
Person::Person(void)//�޲ι���
{
	cout<<"Person was created!"<<endl;
	Name=new char[5];
	strcpy(Name,"None");
}
Person::Person(const Person& P)//���ƹ���
{
	cout<<"Person was created!"<<endl;
	Name=new char[strlen(P.Name)+1];
	strcpy(Name,P.Name);
}
char* Person::GetName(void) const//�������
{
	return Name;
}
void Person::operator=(const Person &P)//���صȺ������
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
