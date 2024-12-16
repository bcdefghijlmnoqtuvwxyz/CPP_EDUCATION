#include <iostream> 

using namespace std; 

class CTest
{
public:
    CTest(int nParam) : m_nData(nParam) {};
    ~CTest() {}

    int GetData() const // 상수형 메서드 선언 및 정의
    {
        // SetData(20); // 사용 불가

        return m_nData; // 멤버 변수의 값을 읽을 수는 있지만 쓸 수는 없음
    }

    int SetData(int nParam) 
    {
        m_nData = nParam;
    }

private:
    int m_nData = 0;
};

int main()
{
    CTest a(10);
    cout << a.GetData() << endl;

    return 0;
}