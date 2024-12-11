#include <iostream> 

using namespace std; 

class CTest // 제작자 코드
{
public:
    CTest() // CTest 클래스의 '생성자 함수' 선언 및 정의
    {
        m_nData = 10;
    }

    int m_nData;

    void PrintData(void)
    {
        cout << m_nData << endl;
    }
};

int main() // 사용자 코드
{
    CTest t; // 생성자 호출
    t.PrintData();

    return 0;
}