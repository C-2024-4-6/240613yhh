#include <iostream>
#include<string>
using namespace std;
#include"student.h"           //不要漏写此行，否则编译通不过
void Student::set_value(int m_num, std::string m_name, char m_sex) {
    num = m_num;
    name= m_name;
    sex = m_sex;
}
void Student::display()         //在类外定义display类函数
{

    cout << "num:" << num << endl;
    cout <<"name：" << name << endl;
    cout << "sex：" << sex << endl;
}