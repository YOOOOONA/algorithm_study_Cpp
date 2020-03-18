// iterator insert(iterator position, const T& x);
// void insert(iterator position, size_type n, const T& x);
// template <class InputIterator>
// void insert(iterator position, InputIterator first, InputIterator last);
//벡터는 배열의 형태로 저장되기 때문에 벡터 끝이 아닌 임의의 위치에 원소를 삽입하게 되면 그 뒤에 있는 원소들을 뒤로 이동시키게 된다. 
//따라서 벡터에서 원소들 중간에 새로운 원소들을 삽입하는 일은 그다시 효율적이지 못하다.
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> myvector(3, 100);
  vector<int>::iterator it;

  it = myvector.begin();
  it = myvector.insert(it, 200);

  myvector.insert(it, 2, 300);

  // "it" no longer valid, get a new one:
  it = myvector.begin();

  vector<int> anothervector(2, 400);
  myvector.insert(it + 2, anothervector.begin(), anothervector.end());

  int myarray[] = {501, 502, 503};
  myvector.insert(myvector.begin(), myarray, myarray + 3);

  cout << "myvector contains:";
  for (it = myvector.begin(); it < myvector.end(); it++) cout << " " << *it;
  cout << endl;

  return 0;
}