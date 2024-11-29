
//苹果每个 0.8 元，第一天买 2 个，第二天开始，每天买前天的 2 倍，直到购买的苹果数不超过100的最大值，求每天平均花多少钱
#include<iostream>
using namespace std;
int main()
{
	float money = 0.8;
	int day = 1;
	int sum = 0, num;
	float ave;
	for (num = 2; num <= 50; num *= 2)
	{
		day++;
	}
	sum += num;
	ave = sum * money / day;
	cout << day << endl;
	cout << sum << endl;
	cout << ave << endl;
	return 0;
}