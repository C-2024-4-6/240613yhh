#include<iostream>
using namespace std;
//����һ���������飬�ڷ�5��ѧ���ģ�ѧ�ţ��ɼ���
//����һ������max����ָ������ָ����������������max�������ҳ�5��ѧ������߳ɼ��ߣ��������ѧ��

class student {
private:
	int cj[5];
public:
	void set(int m_cj[5])
	{
		for(int i=0;i<5;i++)
		{
			cj[i] = m_cj[i];
		}
	}
	int max() {
		int a=0;
		for (int i = 1;i < 5;i++)
		{
			if (cj[a] < cj[i])
			{
				a = i;
			}
		}
		return a;
	}
};
int main()
{
	int cj[5];
	cout << "�����������" << endl;
	for (int i = 0;i < 5;i++)
	{
		cin >> cj[i];
	}
	student pi;
	pi.set(cj);
	int a;
	a = pi.max()+1;
	cout << "ѧ��Ϊ" << a << "�ĳɼ����";
}