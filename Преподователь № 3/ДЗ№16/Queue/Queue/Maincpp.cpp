#include <iostream>
using namespace std;
int main()
{
	int r, a, b;
	cin >> r;
	a = b = r + 2;
	for (int y = 0; y < r * 2 + 5; y++)
	{
		for (int x = 0; x < r * 2 + 5; x++)
		{
			if ((x - a)*(x - a) + (y - b)* (y - b) <= r*r)
				cout << '*';
			else
				cout << ' ';
		}
		cout << endl;
	}
}