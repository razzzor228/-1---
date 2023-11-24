#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
	ofstream of;
	of.open("myfile.txt");
	int n;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++)
	{
		v[i] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		of << v[i] << endl;
	}
}