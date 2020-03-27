#include <iostream>
#include <vector>

template <typename T>
void print_vector(std::vector<T>& vec){
    //전체 벡터 출력하기
    for(typename std::vector<T>::iterator it=vec.begin();it!=vec.end();it++){//++it건 it++이건 상관없음 왜냐면 앞 조건에 성립하면 일단 한번 실행되고 나서 it++이 실행되기 때문
        std::cout<<*it<<std::endl;
    }
}
int main(){
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    std::cout<<"first vec state"<<std::endl;
    print_vector(vec);
    std::cout<<"------------------------"<<std::endl;

    vec.insert(vec.begin()+2,15);
    print_vector(vec);
    std::cout<<"-------------------------"<<std::endl;

    vec.erase(vec.begin()+3);
    print_vector(vec);

    std::vector<int>::iterator it = vec.begin();
    std::vector<int>::iterator end_it = vec.end();
    ////for (; it != end_it; it++) {
    ////if (*it == 20) {
        ////vec.erase(it);//여기서 it를 erase하고 나면 더이상 유효한 반복자가 아니므로 it++해도 end_it가 영원히 될 수 없음.따라서 컴파일 에러 뜨는 코드
  ////}
    //20인애만 지워주면서 it유효하게 만들려면 한 줄만 더 추가해주면 됨
    for (std::vector<int>::iterator it=vec.begin(); it!=vec.end();it++){
        if(*it==20){
            vec.erase(it);
            it=vec.begin();
        }
    }
    std::vector<int>::const_iterator cit = vec.cbegin()+2;//이렇게 선언하면 그냥 참조용으로만 사용하는것, *cit=2000처럼 값을 바꿀수없음

    std::vector<int>::reverse_iterator rit=vec.rbegin();//이러면 맨 뒤에꺼임. rend()하면 맨앞 원소의 한칸 앞을 가리킨.rit도 그냥 ++하면 됨.거꾸로 알아서 감
    //it--같은 코드가 안되고 reverse를 하는 이유:
        // vector 의 index 를 담당하는 타입이 부호 없는 정수 이기 때문입니다. 
        // 따라서 i 가 0 일 때 i -- 를 하게 된다면 -1 이 되는 것이 아니라, 해당 타입에서 가장 큰 정수가 되버리게 됩니다.
        // 따라서 for 문이 영원히 종료할 수 없게 되죠.
}