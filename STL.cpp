//입출력 라이브러리 iostream,시간관련 라이브러리 chrono,정규표현식 라이브러리 regex등등이 있는데
//stl은 보통 
//  "임의 타입"의 객체를 보관하는 컨테이너, 컨테이너에 보관된 원소에 접근할 수 있는 반복자, 반복자들 가지고 일련의 작업 수행하는 알고리즘 세개를 의미함
//  컨테이너는 편지함, 편지를 보고 원하는 편지함을 찾는 일은 바녹자가 수행, 편지함에 특정 순서대로 정렬해 넣는 일은 알고리즘이 수행
//객체가 어떤 특성을 갖는지 무관하게 라이브러리 사용가능. 이점이 C와의 차이점.
//반복자의 도입으로 최소한의 코드만 작성해도됨

//컨테이너 종류 두개:
//  1. 배열처럼 객체들을 순차적으로 보관하는 시퀀스 컨테이너
//  2. 키를 바탕으로 대응되는 값을 찾아주는 연관 컨테이너

//벡터는 임의의 원소 접근을 O(1)로 함.원소 추가 제거도 그럼.
#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    for (std::vector<int>::size_type i =0;i<vec.size();i++){
        std::cout << "vec's "<<i+1<<"th elem :: "<<vec[i]<<std::endl;
    }

    //반복자로 전체 벡터 출력하기
    for(std::vector<int>:: iterator it=vec.begin();it!=vec.end();++it){
        std::cout<<*it << std::endl;
    }

    //int arr[4] = {10,20,30,40}
    //*(arr+2)==arr[2]==30;
    //*(it+2)==vec[2]==30;
    std::vector<int>::iterator it = vec.begin()+2;
    std::cout<<"3rd elem :: "<<*it<<std::endl;
}//여기서 it는 실제 포인터가 아니고 *연산자를 오버로딩해서 포인터처럼 동작하게 만든것이고. *연산자는 it가 가리키는 원소의 레퍼런스를 리턴함
//비어 있는 벡터를 표현할 수 있게 vec.end()는 vec의 마지막원소 뒤를 가리킨다. vec.end()==vec.begin()이면 비어있는 원소를 뜻함