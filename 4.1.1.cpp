#include<iostream>
#include<vector>
using namespace std;
//��дһ�����򣬶���10������������в�ͬ�����������һ�������ֶ�Σ�ֻ��ӡһ�Σ���
//��ʾ��������������һ���µ�ֵ���������һ�����顣���򣬽��䶪����������Ϻ������б���ľ��ǲ�ͬ����
int main()
{
	bool r=false;
	int ma[10];
	int a=0;
	vector<int> tr;
	cout << "����ʮ����"<<endl;
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