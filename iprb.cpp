#include <iostream>

using namespace std;

int main()
{
	int k, m, n;
	cin >> k >> m >> n;
	float u = k + m + n;
	float v = u - 1;
	float YY = k / u;
	float YyYY=m/u*k/v;
	float YyYy=m/u*(m-1)/v*0.75;
	float Yyyy=m/u*n/v*0.5;
	float yyYY=n/u*k/v;
	float yyYy=n/u*m/v*0.5;
	float sum=YY+YyYY+YyYy+Yyyy+yyYY+yyYy;
	cout << sum << endl;
	return 0;
}
