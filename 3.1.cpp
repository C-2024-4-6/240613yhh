#include<iostream>
using namespace std;

//������Ȼ��m��n��
//��1�������ǵ����Լ������������������
//Ҫ�����롢������������н��У���Լ���ɺ���ʵ�֡�
//�ں����������Լ������С������������ʾ��ʹ�����ò�����
int yin(int a, int b)
{
	int temp;
	while (b!=0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int bei(int a, int b,int c)
{
	int d;
	d = a * b / c;
	return d;
}

int main()
{
	cout << "����m,n" << endl;
	int m, n,p,l;
	cin >> m >> n;
	p = yin(m, n);
	l = bei(m, n, p);
	cout << p << endl;
	cout << l << endl;

	return 0;
}