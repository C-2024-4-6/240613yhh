#include<iostream>
using namespace std;
#include"re.h"

int main()
{
	int a;
	cout << "第十天剩余";
	cin >> a;
	for (int t = 1;t < 10;t++)
	{
		a = fx(a);
	}
	cout << "原有" << a;
	return 0;
}