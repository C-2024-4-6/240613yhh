#include <iostream>
#include<string>
using namespace std;
#include"student.h"           //��Ҫ©д���У��������ͨ����
void Student::set_value(int m_num, std::string m_name, char m_sex) {
    num = m_num;
    name= m_name;
    sex = m_sex;
}
void Student::display()         //�����ⶨ��display�ຯ��
{

    cout << "num:" << num << endl;
    cout <<"name��" << name << endl;
    cout << "sex��" << sex << endl;
}