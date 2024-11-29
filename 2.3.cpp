#include <iostream>
using namespace std;

int main()
{
	int a, b, c,s;
	cin >> a>> b>> c;
	s = a + b + c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "It is not triangle" << endl;
	}
	else
	{
		cout << "周长为" << s << endl;
	}
		if (a == b || b == c || c == a)
			cout << "为等腰" << endl;
		else
			cout << "不为等腰" << endl;
	}

