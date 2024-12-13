#include <iostream> 

using namespace std; 

void TestFunc(const int &nParam)
{
    // 상수형 참조였으나 일반 참조로 형변환
    int &nNewParam = const_cast<int &>(nParam);

    nNewParam = 20;
}

int main()
{
    int nData = 10;

    TestFunc(nData);

    cout << nData << endl;

    return 0;
}