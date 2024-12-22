#include<iostream>
using namespace std;

//需要求3个长方柱的体积，请编一个基于对象的程序。数据成员包括length(长)、width(宽)、height(高)。要求用成员函数实现以下功能：
//(1)由键盘分别输入3个长方柱的长、宽、高；
//(2)计算长方柱的体积；
//(3)输出3个长方柱的体积
class cft
{
private:
	int length, width, height;
public:
	void set(int m_length, int m_width, int m_height)
	{
		length = m_length;
		width = m_width;
		height = m_height;
	}
	void display()
	{
		int s;
		s = length * width * height;
		cout << "面积为" << s<<endl;
	}
};
int main() {
	int length, width, height;
	for (int i = 0;i < 3;i++)
	{
		cout << "输入第" << i + 1 << "个长方形的数据"<<endl;
			cin>> length;
			cin >> width;
			cin >> height;
			cft s;
			s.set(length, width, height);
			s.display();
	}
}