#include <iostream> 

using namespace std; 

int main() {

    char user_input[100];
    int number = -1;
    
    //cin >> number;
    //cin.getline(user_input, sizeof(user_input)); // 빈 칸 이후의 단어도 그대로 출력하게 함
    cin.ignore(100, '\n'); // 100글자 이상 또는 줄바꿈 문자가 있으면 무시하겠다는 뜻

    cin >> number;

    cout << user_input << " " << number << endl;

    return 0;
}