#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, char> rna_map;
	rna_map["UUU"] = 'F';
	rna_map["CUU"] = 'L';
	rna_map["AUU"] = 'I';
	rna_map["GUU"] = 'V';
	rna_map["UUC"] = 'F';
	rna_map["CUC"] = 'L';
	rna_map["AUC"] = 'I';
	rna_map["GUC"] = 'V';
	rna_map["UUA"] = 'L';
	rna_map["CUA"] = 'L';
	rna_map["AUA"] = 'I';
	rna_map["GUA"] = 'V';
	rna_map["UUG"] = 'L';
	rna_map["CUG"] = 'L';
	rna_map["AUG"] = 'M';
	rna_map["GUG"] = 'V';
	rna_map["UCU"] = 'S';
	rna_map["CCU"] = 'P';
	rna_map["ACU"] = 'T';
	rna_map["GCU"] = 'A';
	rna_map["UCC"] = 'S';
	rna_map["CCC"] = 'P';
	rna_map["ACC"] = 'T';
	rna_map["GCC"] = 'A';
	rna_map["UCA"] = 'S';
	rna_map["CCA"] = 'P';
	rna_map["ACA"] = 'T';
	rna_map["GCA"] = 'A';
	rna_map["UCG"] = 'S';
	rna_map["CCG"] = 'P';
	rna_map["ACG"] = 'T';
	rna_map["GCG"] = 'A';
	rna_map["UAU"] = 'Y';
	rna_map["CAU"] = 'H';
	rna_map["AAU"] = 'N';
	rna_map["GAU"] = 'D';
	rna_map["UAC"] = 'Y';
	rna_map["CAC"] = 'H';
	rna_map["AAC"] = 'N';
	rna_map["GAC"] = 'D';
	rna_map["CAA"] = 'Q';
	rna_map["AAA"] = 'K';
	rna_map["GAA"] = 'E';
	rna_map["CAG"] = 'Q';
	rna_map["AAG"] = 'K';
	rna_map["GAG"] = 'E';
	rna_map["UGU"] = 'C';
	rna_map["CGU"] = 'R';
	rna_map["AGU"] = 'S';
	rna_map["GGU"] = 'G';
	rna_map["UGC"] = 'C';
	rna_map["CGC"] = 'R';
	rna_map["AGC"] = 'S';
	rna_map["GGC"] = 'G';
	rna_map["CGA"] = 'R';
	rna_map["AGA"] = 'R';
	rna_map["GGA"] = 'G';
	rna_map["UGG"] = 'W';
	rna_map["CGG"] = 'R';
	rna_map["AGG"] = 'R';
	rna_map["GGG"] = 'G';
	string rna;
	cin >> rna;
	string prot;
	int idx = 0;
	int len = rna.length();
	while (idx < len)
	{
		auto it = rna_map.find(rna.substr(idx, 3));
		if (it != rna_map.cend())
		{
			cout << it->second;
		}
		idx += 3;
	}
	cout << endl;
	return 0;
}
