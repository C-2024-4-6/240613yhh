#include<iostream>
using namespace std;
	//�������������㷨��дһ�������������������㷨�������˶�������д���
	//ÿ�˴����У�������Ԫ�ؽ��бȽϡ���Ϊ�����򽻻������򣬱���ԭ˳��
	//�˼�������Ϊ��������bubble sort�����³�����sinking sort������Ϊ��С��ֵ�𽥵ء�ð�ݡ����ϲ������ϴ�ֵ���³����ײ�

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