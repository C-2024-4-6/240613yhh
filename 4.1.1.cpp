#include<iostream>
#include<vector>
using namespace std;
//编写一个程序，读入10个数，输出其中不同的数（即如果一个数出现多次，只打印一次）。
//提示：读入的数如果是一个新的值，则将其存入一个数组。否则，将其丢弃。输入完毕后，数组中保存的就是不同的数
int main()
{
	bool r=false;
	int ma[10];
	int a=0;
	vector<int> tr;
	cout << "输入十个数"<<endl;
	for (int i = 0;i < 10;i++)
	{
		cin >> ma[i];
	}
	for (int i = 0;i < 10;i++)
	{
		for (int j = i+1;j<10;j++)
		{
			if (ma[i] == ma[j])
			{
				r = false;
				break;
			}
			else
			{
				r = true;
			}
		}
		if (r == true)
		{
			tr.push_back(ma[i]);
		}
	}
	
	for (int i = 0;i <tr.size();i++)
	{
		cout << tr[i]<<' ';
	}
}