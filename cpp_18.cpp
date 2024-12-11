#include <iostream> 

using namespace std; 

class CTest // 제작자 코드
{
public:
    CTest() {}// CTest 클래스의 '생성자 함수' 선언 및 정의

    int m_nData1 = 10; // C++11부터 멤버 데이터 선언과 동시에 변수 초기화 가능
    int m_nData2 = 20;

    void PrintData(void)
    {
        cout << m_nData1 << endl; // 멤버 데이터에 접근하고 값을 출력
        cout << m_nData2 << endl;
    }
};

int main() // 사용자 코드
{
    CTest t; // 생성자 호출
    t.PrintData();

    return 0;
}