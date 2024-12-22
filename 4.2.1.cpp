#include<iostream>
using namespace std;
//编写函数检查字符串s1是否为字符串s2的子串，若是，返回第一次匹配的下标，否则返回 - 1
//在主程序中输入字符串s1与s2，调用函数实现
//函数原型：int indexof(const char* s1, const char* s2)
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
		cout << "自" << p << "开始为子集";
	}
	else { cout << " - 1"; }
	delete[] s1;
	delete[] s2;
}