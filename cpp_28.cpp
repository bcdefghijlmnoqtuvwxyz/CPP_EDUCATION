#include <iostream> 

using namespace std; 

class CTest
{
public:
    CTest(int nParam) : m_nData(nParam) {m_nCount++;}
    int GetData() {return m_nData;};
    void ResetCount() {m_nCount = 0;};

    static int GetCount() // 정적 메서드 선언 및 정의
    {
        return m_nCount;
    }

private:
    int m_nData;

    // 정적 멤버 변수 선언(정의는 아님)
    static int m_nCount;
};

int CTest::m_nCount = 0; // CTest 클래스의 정적 멤버 변수 정의

int main()
{
    CTest a(5), b(10);

    cout << a.GetCount() << endl; // 정적 멤버에 접근
    b.ResetCount();

    // 정적 멤버에 접근, 인스턴스 없이도 접근 가능
    cout << CTest::GetCount() << endl;

    return 0;
}