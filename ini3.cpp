#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int a, b, c, d;
	cin >> s;
	cin >> a >> b >> c >> d;
	cout << s.substr(a, b - a + 1) << " " << s.substr(c, d - c + 1) << endl;
	return 0;
}
