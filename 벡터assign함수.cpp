#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> first;
  vector<int> second;
  vector<int> third;

  first.assign(7, 100);  // 100 을 7 번 반복해서 집어 넣는다.

  vector<int>::iterator it;
  it = first.begin() + 1;

  second.assign(it, first.end() - 1);  // first 의 처음과 끝을 제외한 원소들

  int myints[] = {1776, 7, 4};
  third.assign(myints, myints + 3);  // 배열로 부터 받는다.

  cout << "Size of first: " << first[0] << " " << int(first.size()) << endl;
  cout << "Size of second: " << second[0] << " " << int(second.size()) << endl;
  cout << "Size of third: " << third[0] << " " << int(third.size()) << endl;
  return 0;
}