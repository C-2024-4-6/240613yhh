#include<iostream>
using namespace std;
//��ʹ�����º���ͷ��д�����������ַ�����ÿ����ĸ���ֵĴ�����
//void count(const char s[], int counts[])
//counts��һ����26��Ԫ�ص��������顣const[0]��const[1]������const[25]�ֱ��¼a��b������z���ֵĴ�������ĸ���ִ�Сд
//������ĸA����ĸa��������a��
//��д���Գ��򣬶����ַ���������count��������ʾ����Ĵ���
void count(const char s[], int counts[])
{
	int len1 = strlen(s);
	for (int i = 0;i < len1;i++) 
	{
		int d;
		if (int(s[i])>90)
		{
			d = int(s[i]) - 97;
		}
		else { d = int(s[i]) - 65; }
		counts[d]++;
	}
	int c=0;
	for (int i = 0;i < 26;i++)
	{
		if (counts[i])
		{
			char b = char(i+65);
			cout << b<<' '<<"times:" << counts[i]<<endl;
		}
	}

}

int main()
{
	int counts[26] = { 0 };
	cout << "input string"<<endl;
	char s[100];
	cin.getline(s, 100);
	count(s, counts);
}