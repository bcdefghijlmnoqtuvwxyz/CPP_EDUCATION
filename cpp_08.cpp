#include <iostream> 

using namespace std; 

int TestFunc(int nParam, int nParam2 = 2)
{
    return nParam * nParam2;
}

int main() 
{
    cout << TestFunc(10) << endl;

    cout << TestFunc(10, 5) << endl; 

    return 0;
}