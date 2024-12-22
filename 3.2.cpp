#include<iostream>
using namespace std;

//编写程序满足：声明一个函数，判断一个整数是否为素数，使用如下函数头：
//bool is_prime(int num), 如果num是素数函数返回true，否则返回false；
//利用函数is_prime找出前200个素数，并按每行10个输出：
//2     3      5      7    11    13    17    19    23    29

bool is_prime(int num)
{
	int a=2, b=1, c;
	while (num % a != 0&&a<num)
	{
			a++;
	}
	if (a == num)
	{
		return true;
	}
	else if(a != num)
	{
		return false;
	}
}


int main()
{
	//判断
	int num;
	bool c,d=1;
	cin >> num;
	c=is_prime(num);
	cout << c << endl;

	//找前200
	int a=0,t=0;
	int b = 1;
	while (a < 200)
	{
		b++;
		d = is_prime(b);
		
		if (d == 1)
		{
			cout << b << ' ';
			a++;
			t++;
		}
		if (t == 10)
		{
			cout<<endl;
			t = 0;
		}
	}
	return 0;
}