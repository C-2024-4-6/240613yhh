#include <iostream>
using namespace std;
#include<string>
#include"student.h"     

int main()
{
	cout << "����ѧ��";
	string tcg;
	cin >> tcg;
	int m = 12;
	Student stud;                //�������
	stud.set_value(m, tcg, 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}