#include<iostream>
using namespace std;
//��дһ�����������ַ�����ʽ��ʾ��һ��16������ת��Ϊ10�������������������в���
//����ԭ�� int parseHex(const char* const hexString);
//�磺���ú��� parseHex(��A5��);����165
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
	cout <<"ʮ������"<< b;
	delete[] hexString;
}