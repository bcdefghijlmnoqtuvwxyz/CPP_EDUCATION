#include <iostream> 

using namespace std; // std 네임스페이스를 using 예약어로 선언

namespace TEST
{
    int g_nData = 100;

    void TestFunc(void)
    {
        cout << "TEST::TestFunc()" << endl;
    }
}

using namespace TEST; // TEST 네임스페이스에 using 선언

int main()
{
    // 범위 지정을 할 필요가 없음
    TestFunc();
    cout << g_nData << endl;

    return 0;
}