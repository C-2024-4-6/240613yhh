#pragma once
#include <string>
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();     //�����ⶨ��display�ຯ��
	void set_value(int m_num, string m_name, char m_sex);
private:
	int num;
	string name;
	char sex;
};