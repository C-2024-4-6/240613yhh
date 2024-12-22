#include<iostream>
#include<vector>
using namespace std;
//编写如下函数，合并两个排列好的数组，形成一个新的排列好的数组。
//void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
//使用size1 + size2次比较实现函数。编写测试程序，提示用户输入两个排列好的数组，并显示合并以后的数组。
//下面是一个运行样例。注意，输入数据的第一个数字是数组的元素数，而不是数组的一部分。假定数组大小不超过80。
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0, j = 0, k = 0;
	while (i<size1&&j<size2)
	{
		if (list1[i] <= list2[j])
		{
			list3[k] = list1[i];
			i++;
			k++;
		}
		if (list2[j] <= list1[i])
		{
			list3[k] = list2[j];
			j++;
			k++;
		}
	}

		while (j<size2)
		{
			list3[k] = list2[j];
			j++;
			k++;
		}

		while (i < size1)
		{
			list3[k] = list2[i];
			i++;
			k++;
		}
	}


int main()
{
	int size1, size2;
	cout << "数组一的个数";
	cin >> size1;
	int* list1 = new int[size1];
	cout << "输入数据"<<endl;
	for (int i = 0;i < size1;i++) 
	{
		cin >> list1[i];
	}
	cout << "数组二的个数";
	cin >> size2;
	int* list2 = new int[size2];
	cout << "输入数据"<<endl;
	for (int i = 0;i < size2;i++)
	{
		cin >> list2[i];
	}
	int* list3 = new int[size1 + size2];
	merge(list1, size1, list2, size2, list3);
	for (int i = 0;i < size1 + size2;i++)
	{
		cout << list3[i]<<' ';
	}
	delete[] list1;
	delete[] list2;
	delete[] list3;
}