//void push_back(const T& x);//현재의 마지막 원소 뒤에 새로운 원소를 추가하며, 그 원소의 값은 x 의 복사본으로 초기화 된다.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> myvector;
  int myint;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    cin >> myint;
    myvector.push_back(myint);
  } while (myint);//0이면 false라서 자동으로 나옴

  cout << "myvector stores " << (int)myvector.size() << " numbers.\n";

  return 0;
}