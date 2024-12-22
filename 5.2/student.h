#pragma once
#include <string>
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();     //在类外定义display类函数
	void set_value(int m_num, string m_name, char m_sex);
private:
	int num;
	string name;
	char sex;
};