//리스트는 양방향 연결 자료구조형이라서 벡터와 달리 임의의 위치에 있는 원소에 바로 접근 불가
//리스트 컨테이너 자체에서는 시작원소와 마지막 원소의 위치만을 기억하므로  임의의 원소에 접근위해서는 링크를 하나씩 따라가야됨
//그래서 리스트느느 []나 at이 없음
//그렇지만 리스트는 임의의 원소 추가삭제가 O(1)임
//     왜냐면 원하는 위치 앞뒤의 링크값만 바꿔주면 되기 때문
#include <iostream>
#include <list>

int main(){
    std::list<int> li;

    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    for(std::list<int>::iterator it=li.begin();it!=li.end();it++){
        std::cout<<*it<<std::endl;
        //리스트의 iterator는 it+5따위의 임의의 위치 접근을 할 수 없음.왜냐, 리스트는 원소들이 왼쪽과 오른쪽을 동시에 가리키고있음. 따라서 한번에 한칸씩밖에 이동할수없음.즉 메모리상에서 원소들이 불연속적일수있음
        //=>리스트의 반복자는 BidirectionalIterator, 벡터의 반복자는 RandomAccessIterator,참고로 Random~은 Bi~를 상속받음
    }
}