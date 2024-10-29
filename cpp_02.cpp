#include <iostream>

using namespace std; 

int main() {

    int i;
    i = 123;

    cout << i << " " << sizeof(i) << endl; // i의 값 123과 i의 사이즈 4(byte)가 출력됨

    float f = 123.456f;
    double d = 123.456;

    cout << f << " " << sizeof(f) << endl; // f의 값 123.456과 f의 사이즈 4(byte)가 출력됨
    cout << d << " " << sizeof(d) << endl; // d의 값 123.456과 d의 사이즈 8(byte)가 출력됨

    char c = 'a';
    char str[] = "Hello, World!";

    cout << c << " " << sizeof(c) << endl; // c의 문자 a와 c의 사이즈 1(byte)가 출력됨
    cout << str << " " << sizeof(str) << endl; // str의 각 문자열과 마지막 \n의 값까지 합쳐서 14(byte)가 출력됨

    return 0;
}