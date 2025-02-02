#include <iostream> 

using namespace std; 

int main()
{
    int a = 100, b;
    cout << "Input number: ";
    cin >> b;

    try
    {
        // 예외를 검사하고 던짐
        if(b == 0) throw b;     
        else cout << a / b << endl;   
    }   
    catch(int nExp) // 던진 b를 nExp로 받음
    {
        // 예외를 받아 처리
        cout << "ERROR: " << nExp << "으로 나눌 수 없습니다." << endl;
    }
    
    return 0;
}