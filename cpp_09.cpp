#include <iostream> 

using namespace std; 

const int kMaxStr = 100; 

bool IsEqual(const char *str1, const char *str2) {
    for (int i = 0; i < kMaxStr; i++) {
        if(str1[i] != str2[i]) return false;
        if(str1[i] == '\0') return true;
    }

    return true;
}

int main() {

    const char str1[kMaxStr] = "stop";

    while (1)
    {
        char str2[kMaxStr];
        cin >> str2 >> endl;

        if(IsEqual(str1, str2)) {
            cout << "종료" << endl;
            break;
        }
        else {
            cout << "계속" << endl;
        }
    }
    return 0;
}

