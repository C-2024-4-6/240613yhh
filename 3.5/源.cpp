#include<iostream>
using namespace std;
#include"re.h"

int main()
{
	int a;
	cout << "��ʮ��ʣ��";
	cin >> a;
	for (int t = 1;t < 10;t++)
	{
		a = fx(a);
	}
	cout << "ԭ��" << a;
	return 0;
}