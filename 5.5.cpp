#include<iostream>
using namespace std;
//����һ������������Point����˽�б���x��y����һ�����(x, y)����ֵ��
//���д����ʵ�����¹��ܣ����ù��캯�����ݲ������ڶ������ʱ��x��y����ֵ��ʼ��Ϊ��60, 80����
//���ù��г�Ա����void setPoint(int i, int j)������ֵ�޸�Ϊ(60 + i, 80 + j)��
//���ù��г�Ա����display()����޸ĺ������ֵ����������ͨ�����������֤��������
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
		cout << "����Ϊ(" << x << ',' << y << ')';
	}
};
int main() {
	int x, y;
	cout << "����x:";
	cin >> x;
	cout << "����y:";
	cin >> y;
	point s;
	s.setpoint(x, y);
	s.display();
}