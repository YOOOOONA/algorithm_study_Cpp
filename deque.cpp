//실행속도를 위해 메모리를 많이 쓰는 자료구조.
//일정 크기로 잘려서 각각의 블록 속에 존재합니다. 따라서 이 블록들이 메모리 상에 어느 곳에 위치하여 있는지 저장하기 위해서 각각의 블록들의 주소를 저장하는 벡터가 필요
#include <iostream>
#include <deque>

template <typename T>
void print_deque(std::deque<T>& dq){
    std::cout<<"[ ";
    for (const auto& elem: dq){
        std::cout << elem << " ";
    }
    std::cout << " ] " <<std::endl;
}
int main(){
    std::deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(40);
    dq.push_front(50);

    std::cout<<"dq's first state :"<<std::endl;
    print_deque(dq);

    std::cout<<"erase first elem"<<std::endl;
    dq.pop_front();
    print_deque(dq);
    //벡터처럼 임의의 원소에 접근 가능하고 [],at가능함.반복자도 RandomAccessIterator임


//일반적인 상황에서는 그냥 벡터를 사용한다 (거의 만능이다!)

//만약에 맨 끝이 아닌 중간에 원소들을 추가하거나 제거하는 일을 많이 하고, 원소들을 순차적으로만 접근 한다면 리스트를 사용한다.

//만약에 맨 처음과 끝 모두에 원소들을 추가하는 작업을 많이하면 덱을 사용한다.
}