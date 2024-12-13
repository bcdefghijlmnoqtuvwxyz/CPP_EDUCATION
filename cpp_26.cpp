#include <iostream> 

using namespace std; 

class CTest
{
public: 
    CTest(int nParam) : m_nData(nParam){};
    ~CTest() {}

    int GetData() const
    {
        // 상수형 메서드라도 mutable 멤버 변수에는 값을 쓸 수 있음
        m_nData = 20; 

        return m_nData;
    }
private:
    mutable int m_nData = 0;
};

int main()
{
    CTest a(10);
    cout << a.GetData() << endl;

    return 0;
}