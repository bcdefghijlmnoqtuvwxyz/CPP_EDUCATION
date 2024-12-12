#include <iostream> 

using namespace std; 

class CTest
{
public:
    CTest() // 생성자
    {
        cout << "CTest::CTest()" << endl;
    }

    ~CTest() // 소멸자
    {
        cout << "~CTest::CTest()" << endl;
    }
};

int main()
{
    cout << "Begin" << endl;
    CTest a;
    cout << "Before b" << endl;
    CTest b;
    cout << "End" << endl;

    return 0;
}