//从键盘输入 a，用迭代法求 a 的平方根 x = a 。求平方根的迭代公式为：
//要求精确到 | xn + 1 - xn | < 10 - 5。
//	提示：迭代法是把 xn代入迭代公式右边，计算出 xn + 1来，然后把 xn + 1 作为新的 xn ，计算出新的 xn + 1，如此重复，直到 | xn + 1 - xn | < 10 - 5 时，xn + 1 为所求的平方根。可以把 a 作为 xn 的初始值。
//	思考：（1）如果输入 a 为负，在运行时会出现什么情况 ? 修改程序使之能处理任何的 a 值。
//	(2）能否 | xn + 1 - xn | < 10 - 10或更小 ? 为什么 ? 请试一下
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	float a, x, tempx;
	cout << "输入a" << endl;
	cin >> a;
	if (a < 0)
	{
		cout << "wrong" << endl;
	}
	else
	{
		x = 0;
		tempx = a;
		while (abs(tempx - x) >= 0.00000000001)
		{
			x = tempx;
			tempx = 0.5 * (x + a / x);
		}
		cout << tempx << endl;
	}



	return 0;
}