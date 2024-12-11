#include <iostream> 

using namespace std; 

class USERDATA // 제작자의 코드
{
public: // 접근 제어 지시자
    int nAge; // 멤버 변수 선언
    char szName[32];

    void Print(void) // 멤버 함수 선언 및 정의
    {
        printf("%d %s\n", nAge, szName);
    }
};

int main() // 사용자의 코드
{
    USERDATA user = {10, "철수"};
    user.Print();

    return 0;
}