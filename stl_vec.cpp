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

}