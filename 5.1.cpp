#include<iostream>
using namespace std;
//改写程序，要求：
//(1)将数据成员改为私有的；
//(2)将输入和输出的功能改为由成员函数实现；
//(3)在类体内定义成员函数
class Time             // 定义Time类
{
private:             // 数据成员为公用的
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
	cin >> m_hour;      //输入设定的时间 
	cin >> m_minute;
	cin >> m_sec;
	Time t1(m_hour, m_minute, m_sec);
	

	return 0;
}