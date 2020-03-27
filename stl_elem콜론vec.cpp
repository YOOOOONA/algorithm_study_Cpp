#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    
    //range-based for 문
    for(int elem:vec){
        //elem=vec[i]처럼 복사하는 것과 같은 효과임.
        std::cout<<"element : " << elem << std::endl;
    }
    
    return 0;
}
//만약 복사하기 보다 레퍼런스를 받고 싶다면?
    //레퍼런스 타입으로 바꿔주면 됨!
template <typename T>
void print_vector(std::vector<T>& vec){
    for (typename std::vector<T>::iterator it=vec.begin();it!=vec.end();it++){
        std::cout<<*it<<std::endl;
    }
}

template <typename T>
void print_vector_range_based(std::vector<T>& vec){
    for (const auto& elem:vec){
        std::cout<<elem<<std::endl;
    }
}
//이렇게 하고 둘다 print_vector(vec) 이렇게 사용하면 됨