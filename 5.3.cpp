#include<iostream>
using namespace std;

//��Ҫ��3������������������һ�����ڶ���ĳ������ݳ�Ա����length(��)��width(��)��height(��)��Ҫ���ó�Ա����ʵ�����¹��ܣ�
//(1)�ɼ��̷ֱ�����3���������ĳ������ߣ�
//(2)���㳤�����������
//(3)���3�������������
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
		cout << "���Ϊ" << s<<endl;
	}
};
int main() {
	int length, width, height;
	for (int i = 0;i < 3;i++)
	{
		cout << "�����" << i + 1 << "�������ε�����"<<endl;
			cin>> length;
			cin >> width;
			cin >> height;
			cft s;
			s.set(length, width, height);
			s.display();
	}
}