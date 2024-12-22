#include<iostream>
using namespace std;
//建立一个对象数组，内放5个学生的（学号，成绩）
//设立一个函数max，用指向对象的指针作函数参数，在max函数中找出5个学生的最高成绩者，并输出其学号

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
	cout << "输入五个数据" << endl;
	for (int i = 0;i < 5;i++)
	{
		cin >> cj[i];
	}
	student pi;
	pi.set(cj);
	int a;
	a = pi.max()+1;
	cout << "学号为" << a << "的成绩最高";
}