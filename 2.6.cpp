//��дһ�����򣺴Ӽ����������������������� a �� b �����Լ������С������
#include <iostream>
using namespace std;

int main() 
{
	int a, b,c,d;
	cout << "����a" << endl;
	cin >> a;
	cout << "����b" << endl;
	cin >> b;
	//�����Լ��
	int tempA = a, tempB =b;
	while (tempB != 0) {  // ֻҪtempB��Ϊ0���ͳ�������ѭ������
		int remainder = tempA % tempB;
		tempA = tempB;
		tempB = remainder;
	}
		cout <<"���Լ��"<< tempA << endl;
	//����С������
		c = a * b / tempA;
			cout << "��С������" << c << endl;



}