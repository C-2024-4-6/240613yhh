#include<iostream>
#include<vector>
using namespace std;
//编写如下函数，检验C字符串s1是否是C字符串s2的子串。如果匹配，返回s1在s2中的下标，否则返回–1。
//int indexOf(const char s1[], const char s2[])
//编写测试程序，读入两个C字符串，检验C字符串s1是否是C字符串s2的子串
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);	
	//获取长度
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
	cout << "输入两串数据" << endl;
	char s1[100];
	char s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);
	int a;
	a = indexOf(s1, s2);
	cout << a;
}