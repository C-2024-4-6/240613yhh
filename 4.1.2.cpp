#include<iostream>
using namespace std;
	//利用起泡排序算法编写一个排序函数。起泡排序算法分若干趟对数组进行处理。
	//每趟处理中，对相邻元素进行比较。若为降序，则交换；否则，保持原顺序。
	//此技术被称为起泡排序（bubble sort）或下沉排序（sinking sort），因为较小的值逐渐地“冒泡”到上部，而较大值逐渐下沉到底部

int main()
{
	int list[10];
	for (int i = 0;i < 10;i++)
	{
		cin >> list[i];
	}
	 
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j <9; j++)
			if (list[j] > list[j + 1])
			{
				swap (list[j] , list[j + 1]);
				changed = true;
			}
	} while (changed);
	for (int i = 0;i < 10;i++)
	{
		cout << list[i]<<' ';
	}
}