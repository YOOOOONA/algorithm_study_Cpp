#include <iostream>

int change_val(int *p){
    *p = 3;
    return 0;
}
int main(){
    int number = 5;
    std::cout << number << std::endl;
    change_val(&number);
    std::cout << number << std::endl;
}
//C++ 규정에서 레퍼런스의 배열을 선언하는 것을 막아버리고 있습니다. 그러면 도대체 왜 안될까요? 
// 당연한 이야기 입니다. 위에서 말했듯이 레퍼런스는 메모리 상에 특정 공간을 차지하는 것이 아니라 컴파일 시에 원래 레퍼런스가 참조하던 변수의 주소값으로 대체된다고 하였습니다. 따라서 메모리 공간을 차지하지 않는 것의 포인터를 생각한다는 것은 말이 안되는 것입니다.
