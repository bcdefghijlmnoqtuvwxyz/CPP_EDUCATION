#include <iostream> 

using namespace std; 

void TestFunc(int &rParam)
{
    cout << "TestFunc(int &)" << endl;
}

void TestFunc(int &&rParam)
{
    cout << "TestFunc(int &&)" << endl;
}

int main()
{
    TestFunc(3 + 4); // 3 + 4 결과는 r-value이다. 절대로 l-value가 될 수 없다.

    return 0;
}