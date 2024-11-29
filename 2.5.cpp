#include <iostream>
using namespace std;
#include <string>
int main()
    {
	int b = 0, c = 0, space = 0, letter = 0, math = 0;
	char d;
	while ((d = getchar())!= '\n')
	{
		if (d >= 'a' && d <= 'z' || d <= 'Z' && d >= 'A')
			letter++;
		else if (d >= 0 && d <= 9)
			math++;
		else if (d == ' ')
			space++;
	}
	cout << space<<endl;
	cout << letter<<endl;
	cout << math << endl;
}