#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	int x = 1, y = 1;
	while (t--)
	{
		int k;
		cin >> k;
		k--;
		for (int m = 1; m <= 8; m++)
		{
			for (int n = 1; n <= 8; n++)
			{
				if (m == x && n == y)
					cout << "O";
				else if (k > 0)
				{
					k--;
					cout << ".";
				}
				else
					cout << "X";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}