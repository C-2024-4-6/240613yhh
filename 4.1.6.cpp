#include<iostream>
using namespace std;
//请使用如下函数头编写函数，数出字符串中每个字母出现的次数。
//void count(const char s[], int counts[])
//counts是一个有26个元素的整数数组。const[0]，const[1]，…，const[25]分别记录a，b，…，z出现的次数。字母不分大小写
//例如字母A和字母a都被看作a。
//编写测试程序，读入字符串并调用count函数，显示非零的次数
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