#include<iostream>
using namespace std;
//�������н���һ��̬���飨ʹ��new��������Ԫ�ؼ�Ԫ�ظ����ɼ������룬��̬���Թ۲�ָ�뼰ָ��ָ������ݣ�
//���һ��������������С������������������ָ�뷽ʽ�������Ԫ�أ�����ͷ������ڴ棨delete��
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
	cout << "Ԫ�ظ���";
	cin >> b;
	int* move = new int[b];

	cout << "����Ԫ��" << endl;
	for (int i = 0;i < b;i++)
	{
		cin >> move[i];
	}
	list(move, b);
	delete[] move;
}