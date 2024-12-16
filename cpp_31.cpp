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

        m_pnData = new int; // 메모리를 할당

        *m_pnData = *rhs.m_pnData; // 포인터가 가리키는 위치에 값을 복사
    }

    // 객체가 소멸하면 동적 할당한 메모리를 해제
    ~CMyData()
    {
        delete m_pnData;
    }

    int GetData()
    {
        if(m_pnData != NULL)
            return *m_pnData;

        return 0;
    }
private:
    // 포인터 멤버 데이터
    int *m_pnData = nullptr;
};

int main()
{
    CMyData a(10);
    CMyData b(a);
    cout << a.GetData() << endl;
    cout << b.GetData() << endl;

    return 0;
}