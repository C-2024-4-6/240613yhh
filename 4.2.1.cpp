#include<iostream>
using namespace std;
//��д��������ַ���s1�Ƿ�Ϊ�ַ���s2���Ӵ������ǣ����ص�һ��ƥ����±꣬���򷵻� - 1
//���������������ַ���s1��s2�����ú���ʵ��
//����ԭ�ͣ�int indexof(const char* s1, const char* s2)
int indexof(const char* s1, const char* s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if(len1>len2)
	{
		return 0;
	}
	for (int i = 0;i <= len2-len1;i++)
	{
			for (int j = 0;j < len1;j++)
			{
				if (s2[i + j] != s1[j])
				{
					break;
				}
				if (j == len1-1)
				{
					return i;
				}
			}
	}
	return 0;
}

int main()
{
	char* s1 = new char[100];
	char* s2 = new char[100];
	cout << "input s1 string" << endl;
	cin.getline(s1, 100);
	cout << "input s2 string" << endl;
	cin.getline(s2, 100);
	int p = indexof(s1, s2);
	if (p) 
	{
		cout << "��" << p << "��ʼΪ�Ӽ�";
	}
	else { cout << " - 1"; }
	delete[] s1;
	delete[] s2;
}