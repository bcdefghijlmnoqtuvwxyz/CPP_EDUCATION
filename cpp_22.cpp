#include <iostream> 

using namespace std;

class CTest
{
    int m_nData;

public:
    CTest()
    {
        cout << "CTest::CTest()" << endl;
    }

    ~CTest()
    {
        cout << "~CTest::CTest()" << endl;
    }
};

int main()
{
    cout << "Begin" << endl;

    CTest *pData = new CTest[3]; // new 연산자를 이용해 동적으로 객체를 생성

    delete [] pData; // delete 연산자를 이용해 객체를 삭제

    cout << "end" << endl;

    return 0;
}