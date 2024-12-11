#include <iostream> 

using namespace std; 

void TestFunc(void) 
{
    cout << "TestFunc()" << endl;
}

namespace TEST
{
    void TestFunc(void)
    {
        cout << "TEST::TestFunc()" << endl;
    }
}

namespace MYDATA
{
    void TestFunc(void) 
    {
        cout << "MYDATA::TestFunc()" << endl;
    }
}

int main()
{
    TestFunc(); // 묵시적 전역
    ::TestFunc(); // 명시적 전역
    TEST::TestFunc();
    MYDATA::TestFunc();

    return 0;
}