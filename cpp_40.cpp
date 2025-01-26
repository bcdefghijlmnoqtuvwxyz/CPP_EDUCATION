#include <iostream> 

using namespace std; 

class CMyDataA
{
public:
    CMyDataA() {
        cout << "CMyDataA()" << endl;
    }

    ~CMyDataA() {
        cout << "~CMyDataA()" << endl;
    }
};

class CMyDataB : public CMyDataA // 상속
{
public:
    CMyDataB() {
        cout << "CMyDataB()" << endl;
    }

    ~CMyDataB() {
        cout << "~CMyDataB()" << endl;
    }
};

class CMyDataC : public CMyDataB // 상속
{
public:
    CMyDataC() {
        cout << "CMyDataC()" << endl;
    }

    ~CMyDataC() {
        cout << "~CMyDataC()" << endl;
    }
};

int main()
{
    cout << "begin" << endl;
    CMyDataC data;
    cout << "end" << endl;

    return 0;
}