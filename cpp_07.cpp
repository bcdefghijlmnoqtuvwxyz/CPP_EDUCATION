#include <iostream> 

using namespace std;

int main() {

    int nData = 10;

    int &ref = nData; // 변수에 대한 참조자 선언

    ref = 20; // 참조자 값을 변경하면 원본도 변경됨
    cout << nData << endl;

    int *pnData = &nData; // 포인터를 쓰는 것과 비슷함
    *pnData = 30;
    cout << nData << endl;

    return 0;
}