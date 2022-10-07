#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	char o;
	double x,y;
	while (true)
	{
		cout << "enter your exercice\n";
		cin >> x >> o >> y;
		if (o == '+')
		{ 
			cout << x + y << endl;
		}
		if (o == '-')
        {
            cout << x - y << endl;
        }
		if (o == '*')
        {
            cout << x * y << endl;
        }
		if (o == '/')
        {
			if (y == 0) {
				cout << "Error" << endl;
			}
			else {
				cout << x / y << endl;
			}
        }
		if (o == '^')
        {
			cout << pow(x, y) << endl;
        }
	}
	system("pause");
	return 0;
}