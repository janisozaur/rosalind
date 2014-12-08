#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> fib;
	int n;
	cin >> n;
	fib.resize(n);
	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < n; i++)
	{
		fib[i] = fib.at(i - 1) + fib.at(i - 2);
	}
	cout << fib.at(n - 1) << endl;
	return 0;
}
