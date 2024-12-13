#include <iostream> 

using namespace std; 

class CMyData
{
public:
    CMyData(int nParam) : m_nData(nParam) {};

    void PrintData(/*CMyData *pData*/)
    {
        // CMyData *this = pData;

        // m_nData의 값을 출력
        cout << m_nData << endl; 

        // CMyData 클래스의 멤버인 m_nData 값을 출력
        cout << CMyData::m_nData << endl;

        // 메서드를 호출한 인스턴스의 m_nData 멤버 값을 출력
        cout << this->m_nData << endl;

        // 메서드를 호출한 인스턴스의 CMyData 클래스 멤버 m_nData를 출력
        cout << this->CMyData::m_nData << endl;
    }
private:
    int m_nData;
};

int main()
{
    CMyData a(5);
    a.PrintData(/*&a*/);

    return 0;
}