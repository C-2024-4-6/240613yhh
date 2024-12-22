#include<iostream>
using namespace std;
//设有一描述坐标点的类Point，其私有变量x和y代表一个点的(x, y)坐标值。
//请编写程序实现以下功能：利用构造函数传递参数，在定义对象时将x、y坐标值初始化为（60, 80）；
//利用公有成员函数void setPoint(int i, int j)将坐标值修改为(60 + i, 80 + j)；
//利用公有成员函数display()输出修改后的坐标值。主函数中通过定义对象，验证各个函数
class point
{
private:
	int x = 60, y = 80;
public:
	void setpoint(int i, int j)
	{
		x = +i;
		y = +j;
	}
	void display()
	{
		cout << "坐标为(" << x << ',' << y << ')';
	}
};
int main() {
	int x, y;
	cout << "输入x:";
	cin >> x;
	cout << "输入y:";
	cin >> y;
	point s;
	s.setpoint(x, y);
	s.display();
}