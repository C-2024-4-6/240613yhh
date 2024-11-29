#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	char k;
	cin >> a;
	cin >> k;
	cin >> b;
	switch (k)
	{
	case '+':
		c = a + b;cout << c << endl;
		break;
	case'-':
		c = a - b;cout << c << endl;
		break;
	case'*':
		c = a * b;cout << c << endl;
		break;
	case'/':
		if (b == 0)
		{
			cout << "wrong" << endl;
		}
		else {
			c = a / b;
			cout << c << endl;
		}
		break;
	default:
		cout << "what" << endl;
	}
	
}
