#include<iostream>
using namespace std;
//��д����Ҫ��
//(1)�����ݳ�Ա��Ϊ˽�еģ�
//(2)�����������Ĺ��ܸ�Ϊ�ɳ�Ա����ʵ�֣�
//(3)�������ڶ����Ա����
class Time             // ����Time��
{
private:             // ���ݳ�ԱΪ���õ�
		int hour;
	int minute;
	int sec;
public:
	Time(int m_hour,int m_minute,int m_sec)
	{
		hour = m_hour;
		minute = m_minute;
		sec = m_sec;
		cout << hour << ":" << minute << ";" << sec << endl;
	}
};
int main()
{
	int m_hour, m_minute,m_sec;
	cin >> m_hour;      //�����趨��ʱ�� 
	cin >> m_minute;
	cin >> m_sec;
	Time t1(m_hour, m_minute, m_sec);
	

	return 0;
}