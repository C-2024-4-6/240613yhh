#include<iostream>
using namespace std;
//编写一个函数将以字符串形式表示的一个16进制数转换为10进制数，并在主函数中测试
//函数原型 int parseHex(const char* const hexString);
//如：调用函数 parseHex(“A5”);返回165
int parseHex(const char* const hexString)
{
	int decimal = 0;
	int len = strlen(hexString);
	char d;
	for (int i = 0;i < len;i++)
	{
		d = hexString[i];
		int value=0;
		if (d >= '0' && d <= '9')
		{
			value = d - '0';
		}
		if (d >= 'a' && d <= 'f')
		{
			value = d - 'a'+10;
		}
		if (d >= 'A' && d <= 'F')
		{
			value = d - 'a' + 10;
		}
		value=value* pow(16, len - i - 1);
		decimal += value;
	}
	return decimal;
}
int main()
{
	char* hexString = new char[100];
	cin.getline(hexString, 100);
	int b=parseHex(hexString);
	cout <<"十进制是"<< b;
	delete[] hexString;
}