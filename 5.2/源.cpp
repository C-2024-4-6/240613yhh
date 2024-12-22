#include <iostream>
using namespace std;
#include<string>
#include"student.h"     

int main()
{
	cout << "输入学号";
	string tcg;
	cin >> tcg;
	int m = 12;
	Student stud;                //定义对象
	stud.set_value(m, tcg, 'm');
	stud.display();              //执行stud对象的display函数
	return 0;
}