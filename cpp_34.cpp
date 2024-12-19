#include <iostream> 

using namespace std; 

class CTestData // 제작자 코드
{
public:
    // 매개변수가 하나뿐인 생성자는 형변환이 가능
    // 하지만 묵시적으로는 불가능하도록 차단
    explicit CTestData(int nParam) : m_nData(nParam)
    {
        cout << "CTestData(int)" << endl;
    }
private:
    int m_nData = 0;
};

int main()
{
    TestFunc(5); // 컴파일 오류가 발생

    return 0;
}