#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

class Maxim {
    int a;
public:
    Maxim() {
    }
    Maxim(int ch){
        a = ch;
        cout << ch << endl;
    }
    ~Maxim() {}
};
int main()
{
    ifstream ifile;
    ifile.open("myfile.txt");
    int a;
    vector <Maxim*> v;
    for (; ;)
    {
        ifile >> a;
        if (ifile.eof())break;
        v.push_back(new Maxim(a));
    }
}
