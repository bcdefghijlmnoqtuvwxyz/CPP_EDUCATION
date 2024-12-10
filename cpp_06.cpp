#include <iostream> 

int main() {

    int *pData = new int; // 인스턴스만 동적으로 생성하는 경우

    int *pNewData = new int(10); // 초기값을 기술하는 경우

    *pData = 5;

    std::cout << *pData << std::endl;
    std::cout << *pNewData << std::endl;

    delete pData;
    delete pNewData;

    int *arr = new int[5]; // 객체를 배열 형태로 동적 생성

    for(int i = 0; i < 5; ++i) {
        arr[i] = (i + 1) * 10;
    }

    for(int i = 0; i < 5; ++i) {
        std::cout << arr[i] << std::endl;
    }

    delete[] arr; // 배열 형태로 생성한 대상은 반드시 배열 형태로 삭제

    return 0;
}