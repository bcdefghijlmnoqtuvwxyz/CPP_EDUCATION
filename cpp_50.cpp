#include <iostream> 
#include <cstring>  // 문자열 처리를 위해 필요

using namespace std; 

// 일반적인 템플릿 함수
template<typename T>
T Add(T a, T b) {
    return a + b;
}

// 문자열을 다루기 위한 템플릿 특수화
template<>
char* Add<char*>(char* pszLeft, char* pszRight)
{
    int nLenLeft = strlen(pszLeft);
    int nLenRight = strlen(pszRight);
    
    // 결과 문자열을 저장할 메모리 할당
    char* pszResult = new char[nLenLeft + nLenRight + 1];

    // 문자열 복사
    strcpy(pszResult, pszLeft);
    strcat(pszResult, pszRight); 

    return pszResult;
}

int main()
{
    // 정수형 더하기
    int nResult = Add<int>(3, 4);
    cout << "Integer Addition: " << nResult << endl;

    // 문자열 더하기
    char str1[] = "Hello ";
    char str2[] = "World!";

    char* pszResult = Add<char*>(str1, str2);
    cout << "String Addition: " << pszResult << endl;

    // 동적 할당된 메모리 해제
    delete[] pszResult;

    return 0;
}