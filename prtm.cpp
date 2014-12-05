#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<char, double> mass_map;
	float water = 18.01056f;
	mass_map['A'] = 71.03711;
	mass_map['C'] = 103.00919;
	mass_map['D'] = 115.02694;
	mass_map['E'] = 129.04259;
	mass_map['F'] = 147.06841;
	mass_map['G'] = 57.02146;
	mass_map['H'] = 137.05891;
	mass_map['I'] = 113.08406;
	mass_map['K'] = 128.09496;
	mass_map['L'] = 113.08406;
	mass_map['M'] = 131.04049;
	mass_map['N'] = 114.04293;
	mass_map['P'] = 97.05276;
	mass_map['Q'] = 128.05858;
	mass_map['R'] = 156.10111;
	mass_map['S'] = 87.03203;
	mass_map['T'] = 101.04768;
	mass_map['V'] = 99.06841;
	mass_map['W'] = 186.07931;
	mass_map['Y'] = 163.06333;
	string protein;
	cin >> protein;
	double sum = 0.f;
	for (const char &c : protein)
	{
		sum += mass_map.at(c);
	}
	cout.precision(15);
	cout << sum << endl;
	return 0;
}
