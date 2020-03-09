#include <iostream>

int fn1(int &a) {return a;}//이렇게 하면 임시로 복사된 x의 우측값만 리턴된다.그래서 읽기만 가능하고 수정은 불가
int &fn2(int &a) {return a;}
int main(){
    int x = 1;
    //std::cout << fn1(x)++ << std::endl;//이 코드는 컴파일 불가..왜냐 수정이 안되는 값을 리턴하기 때문에!
    std::cout << fn2(x)++ << std::endl;
    std::cout << fn1(x) << std::endl;//++안됨
    
    return 0;
}


