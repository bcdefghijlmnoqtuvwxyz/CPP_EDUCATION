#include <iostream> 

using namespace std;

int main() {

    char my_string[] = "Hello, world!";

    for(int i = 0; my_string[i] != '\0'; i++) { // 개행 문자 전까지 출력
        cout << my_string[i];
    }

    cout << endl;

    return 0;
}