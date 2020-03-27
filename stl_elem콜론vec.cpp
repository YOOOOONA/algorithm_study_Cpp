#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    
    //range-based for 문
    for(int elem:vec){
        std::cout<<"element : " << elem << std::endl;
    }
    return 0;
}