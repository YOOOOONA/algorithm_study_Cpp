// 소멸자 호출 확인하기
#include <string.h>
#include <iostream>

class Test {
  char c;

 public:
  Test(char _c) {
    c = _c;
    std::cout << "creater " << c << std::endl;
  }
  ~Test() { std::cout << "deleter " << c << std::endl; }
};
void simple_function() { Test b('b'); }
int main() {
  Test a('a');
  simple_function();
}