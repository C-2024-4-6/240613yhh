#include<iostream>
using namespace std;
//主程序中建立一动态数组（使用new），数组元素及元素个数由键盘输入，动态调试观察指针及指针指向的内容；
//设计一个函数对数组由小到大排序；主程序中用指针方式输出数组元素；最后释放数组内存（delete）
void list(int* move, int b)
{
	bool d = true;
	for (int i = 0;i < b;i++)
	{
		for (int j = 0;j < b-1;j++)
		{
			if (move[j] <= move[j + 1])
			{
				d = true;
			}
			else { d = false; }
			if (!d)
			{
				swap(move[j], move[j + 1]);
			}
		}
	}
	for(int i=0;i<b;i++)
	{
		cout << move[i] << ' ';
	}
}

int main()
{
	int a, b;
	cout << "元素个数";
	cin >> b;
	int* move = new int[b];

	cout << "输入元素" << endl;
	for (int i = 0;i < b;i++)
	{
		cin >> move[i];
	}
	list(move, b);
	delete[] move;
}