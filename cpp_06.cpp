#include <iostream> 

using namespace std; 

int main() {

    int a = 123; // a라는 메모리 주소에서 123이라는 값을 저장
    
    int *b = &a; // b에 a의 메모리 주소 대입 

    *b = 567; // b가 가르키고 있는 주소에 저장되어 있는 값을 변경시킴

    cout << a << " " << b << " " << *b << endl;

    return 0;
}