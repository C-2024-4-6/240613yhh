#include<iostream>
using namespace std;
#include"mytriangle.h"

int main()
{
	int a, b, c,s;
	bool d;
	cout << "��������" << endl;
	cin >> a >> b >> c;
	d = is_valid(a, b, c);
	if (d == true)
	{
		s = area(a, b, c);
		cout << "���Ϊ" << s << endl;
	}
	if (d == false)
	{
		cout << "wrong" << endl;
	}
	return 0;
}
