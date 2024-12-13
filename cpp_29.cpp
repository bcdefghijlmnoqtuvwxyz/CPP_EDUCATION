#include <iostream> 

using namespace std; 

class CMyData
{
public:
    CMyData() {cout << "CMyData()" << endl;}

    CMyData(const CMyData &rhs) // 복사 생성자 선언 및 정의
    // : m_nData(rhs.m_nData)
    {
        this->m_nData = rhs.m_nData;
        cout << "CMyData(const CMyData &)" << endl;
    }

    int GetData(void) const {return m_nData;}
    void SetData(int nParam) {m_nData = nParam;}

private:
    int m_nData = 0;
};

int main()
{
    CMyData a;
    a.SetData(10); // 디폴트 생성자 호출

    CMyData b(a);
    cout << b.GetData() << endl; // 복사 생성자가 호출

    return 0;
}