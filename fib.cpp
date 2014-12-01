#include <iostream>
#include <vector>

using namespace std;

unsigned long long fib(int n, int k)
{
	if (n == 1 || n == 2)
	{
		return 1;
	} else {
		return fib(n - 1, k) + fib(n - 2, k) * k;
	}
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << fib(n, k) << endl;
	return 0;
}
