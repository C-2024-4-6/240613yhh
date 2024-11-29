//编写一个程序：从键盘上输入两个正整数，求 a 和 b 的最大公约数与最小公倍数
#include <iostream>
using namespace std;

int main() 
{
	int a, b,c,d;
	cout << "输入a" << endl;
	cin >> a;
	cout << "输入b" << endl;
	cin >> b;
	//求最大公约数
	int tempA = a, tempB =b;
	while (tempB != 0) {  // 只要tempB不为0，就持续进行循环操作
		int remainder = tempA % tempB;
		tempA = tempB;
		tempB = remainder;
	}
		cout <<"最大公约数"<< tempA << endl;
	//求最小公倍数
		c = a * b / tempA;
			cout << "最小公倍数" << c << endl;



}