//�Ӽ������� a���õ������� a ��ƽ���� x = a ����ƽ�����ĵ�����ʽΪ��
//Ҫ��ȷ�� | xn + 1 - xn | < 10 - 5��
//	��ʾ���������ǰ� xn���������ʽ�ұߣ������ xn + 1����Ȼ��� xn + 1 ��Ϊ�µ� xn ��������µ� xn + 1������ظ���ֱ�� | xn + 1 - xn | < 10 - 5 ʱ��xn + 1 Ϊ�����ƽ���������԰� a ��Ϊ xn �ĳ�ʼֵ��
//	˼������1��������� a Ϊ����������ʱ�����ʲô��� ? �޸ĳ���ʹ֮�ܴ����κε� a ֵ��
//	(2���ܷ� | xn + 1 - xn | < 10 - 10���С ? Ϊʲô ? ����һ��
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	float a, x, tempx;
	cout << "����a" << endl;
	cin >> a;
	if (a < 0)
	{
		cout << "wrong" << endl;
	}
	else
	{
		x = 0;
		tempx = a;
		while (abs(tempx - x) >= 0.00000000001)
		{
			x = tempx;
			tempx = 0.5 * (x + a / x);
		}
		cout << tempx << endl;
	}



	return 0;
}