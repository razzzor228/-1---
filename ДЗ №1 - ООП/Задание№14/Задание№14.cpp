#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	ifstream ifile;
	ifile.open("myfile.txt");
	vector <string> v;
	string s0;
	for (; ;)
	{
		ifile >> s0;
		v.push_back(s0);
		if (ifile.eof()) break;
	}
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;
}