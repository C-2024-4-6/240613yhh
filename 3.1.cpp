#include<iostream>
using namespace std;

//输入自然数m和n，
//（1）求他们的最大公约数（或称最大公因数）。
//要求输入、输出在主函数中进行，求公约数由函数实现。
//在函数中求最大公约数与最小公倍数。（提示：使用引用参数）
int yin(int a, int b)
{
	int temp;
	while (b!=0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int bei(int a, int b,int c)
{
	int d;
	d = a * b / c;
	return d;
}

int main()
{
	cout << "输入m,n" << endl;
	int m, n,p,l;
	cin >> m >> n;
	p = yin(m, n);
	l = bei(m, n, p);
	cout << p << endl;
	cout << l << endl;

	return 0;
}