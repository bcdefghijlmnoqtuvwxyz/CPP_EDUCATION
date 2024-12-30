#include <iostream> 

using namespace std; 

class CMyData
{
public: // 누구나 접근 가능
    CMyData() {cout << "CMyData()" << endl;}
    int GetData() {return m_nData;}
    void SetData(int nParam) {m_nData = nParam;}

protected: // 파생 클래스만 접근 가능
    void PrintData() {cout << "CMyData::PrintData()" << endl;} 

private: // 누구도 접근 불가능
    int m_nData = 0;
};

class CMyDataEx : public CMyData
{
public:
    CMyDataEx() {cout << "CMyDataEx()" << endl;}

    void TestFunc()
    {
        PrintData();
        SetData(5);
        cout << CMyData::GetData() << endl;
    }
};

int main()
{
    CMyDataEx data;

    data.SetData(10); // 기본 클래스(CMyData) 멤버에 접근
    cout << data.GetData() << endl;

    data.TestFunc(); // 파생 클래스(CMyDataEx) 멤버에 접근

    return 0;
}