#include <iostream> 

using namespace std; 

class CMyData
{
public:
    CMyData(int nParam)
    {
        m_pnData = new int;
        *m_pnData = nParam;
    }

    // 복사 생성자 선언 및 정의
    CMyData(const CMyData &rhs)
    {
        cout << "CMyData(const CMyData &)" << endl;

        m_pnData = new int; // 메모리 할당

        *m_pnData = *rhs.m_pnData; // 포인터가 가리키는 위치에 값을 복사
    }

    // 객체가 소멸하면 동적 할당한 메모리를 해제
    ~CMyData()
    {
        delete m_pnData;
    }

    // 단순 대입 연산자 함수를 정의
    CMyData& operator = (const CMyData &rhs)
    {
        *m_pnData = *rhs.m_pnData;

        return *this; // 객체 자신에 대한 참조를 반환
    }

    int GetData()
    {
        if(m_pnData != NULL)
            return *m_pnData;

        return 0;
    }

private:
    int *m_pnData = nullptr; // 포인터 멤버 데이터
};

int main()
{
    CMyData a(10);
    CMyData b(20);

    a = b; // 단순 대입을 시도하면 모든 멤버의 값을 그대로 복사
    cout << a.GetData() << endl;

    return 0;
}