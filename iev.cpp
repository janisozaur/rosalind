#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	float exp = (a + b + c + d * 0.75 + e * 0.5) * 2;
	cout << exp << endl;
	return 0;
}
