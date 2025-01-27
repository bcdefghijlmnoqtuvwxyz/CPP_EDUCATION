#include <iostream> 

using namespace std; 

class CMyData
{
public:
    CMyData() {m_pszData = new char[32];}

    virtual ~CMyData() // 소멸자를 가상 함수로 선언
    {
        cout << "~CMyData()" << endl;
        delete m_pszData;
    }
private:
    char *m_pszData;
};

class CMyDataEx : public CMyData
{
public:
    CMyDataEx() {m_pnData = new int;}

    ~CMyDataEx() 
    {
        cout << "~CMyDataEx()" << endl;
        delete m_pnData;
    }
private:
    int *m_pnData;
};

int main()
{
    CMyData *pData = new CMyDataEx;

    delete pData; // 참조 형식에 맞는 소멸자가 호출

    return 0;
}