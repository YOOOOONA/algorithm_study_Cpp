#include <iostream>

int main(){
    int arr[3] = {1,2,3};
    int(&ref)[3] = arr;

    ref[0] = 2;
    ref[1] = 3;
    ref[2] = 1;

    int arr2[3][2] = {1, 2, 3, 4, 5, 6};
    int (&ref2)[3][2] = arr2;//레퍼런스 이용하면 이렇게 크기 똑같이 맞춰서 초기화해야됨
    //그래서 포인터 사용하지?
    int arr3[3][3]={1,1,1,2,2,2,3,3,3};
    //int* ref3 = arr3; 이게 아닌가.. 포인터..

    std::cout << arr << " " << arr[0] << arr[1] << arr[2] << std::endl;
    return 0;
}