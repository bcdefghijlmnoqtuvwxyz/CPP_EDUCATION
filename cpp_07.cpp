#include <iostream> 

using namespace std;

int main() {

    int my_array[] = {23 ,38, 56, 69, 78};

    char my_str[] = {'h', 'e', 'l', 'l', 'o'};

    char *ptr = my_str; // 1번째 배열의 값인 h가 포인터 주소가 됨

    cout << *(ptr + 3) << endl; // l이 출력됨
    cout << ptr[3] << endl; // 같은 의미

    return 0;
}