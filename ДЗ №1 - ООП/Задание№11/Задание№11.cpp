#include <iostream>
#include <vector>
using namespace std;

class Test {
    int a = 20;
public:
    Test() {
        cout << "Chislo = " << a <<  endl;
    }
    ~Test() {
        cout << "Destruct" << endl;
    }
};
int main()
{
    vector <Test*>v(10);
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = new Test();
    }
    for (int i = 0; i < v.size(); i++)
    {
        delete v[i]; v[i] = 0;
    }
}