#include <iostream> 

using namespace std; 

int main() {

    char user_input[100];

    cout << "원하는 문장을 입력해주세요." << endl;
    cout << "입력: ";

    //cin >> user_input; // 입력을 할 때 빈 칸 이후의 단어는 생략함 

    cin.getline(user_input, sizeof(user_input)); // 빈 칸 이후의 단어도 그대로 출력함

    cout << "메아리: " << user_input << endl;

    return 0;
}