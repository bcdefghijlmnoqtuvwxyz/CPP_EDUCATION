#include <iostream> 

using namespace std; 

class CMyData
{
public:
    virtual void PrintData() // 가상 함수로 선언 및 정의
    {
        cout << "CMyData: " << m_nData << endl;
    }

    void TestFunc()
    {
        cout << "TestFunc()" << endl;

        PrintData();

        cout << "end" << endl;
    }

protected:
    int m_nData = 10;
};

class CMyDataEx : public CMyData // 상속
{
public:
    virtual void PrintData() // 가상 함수로 선언 및 정의
    {
        cout << "CMyDataEx: " << m_nData * 2 << endl;
    }
};

int main()
{
    CMyDataEx a;
    a.PrintData(); // 부모인 CMyData의 PrintData() 함수가 무시되고
                   // 자식인 CMyDataEx의 PrintData() 함수가 실행됨
                   // CMyDataEx: 20 이 출력됨

    CMyData &b = a; // 실 형식은 CMyDataEx, 참조 형식은 CMyData인 참조자 b가 선언됨
                    // 일반 메서드의 경우 참조 형식의 메서드 호출이 결정되지만, 가상 함수는 실 형식의 메서드를 호출
                    
    b.PrintData(); // CMyDataEx: 20 이 출력됨
    a.TestFunc(); // CMyDataEx: 20 이 출력됨

    return 0;
}