#include<iostream>
#include<vector>
using namespace std;
//��д���º���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ������ƥ�䣬����s1��s2�е��±꣬���򷵻بC1��
//int indexOf(const char s1[], const char s2[])
//��д���Գ��򣬶�������C�ַ���������C�ַ���s1�Ƿ���C�ַ���s2���Ӵ�
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);	
	//��ȡ����
	if (len2<len1)
	{
		return -1;
	}
	for (int i = 0;i <= len2 - len1;i++)
	{
		for (int j = 0;j < len1;j++)
		{
			if(s2[i+j]!=s1[j])
			{
				break;
			}
			if(j==len1-1&& s2[i + j] == s1[j])
			{
				return 1;
			}
		}
	}
	return -1;
}

int main()
{
	cout << "������������" << endl;
	char s1[100];
	char s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);
	int a;
	a = indexOf(s1, s2);
	cout << a;
}