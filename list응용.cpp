#include <iostream>
#include <list>

template <typename T>
void print_list(std::list<T>& li){
    std::cout<<"[ ";
    for(const auto& elem:li){
        std::cout << elem << " ";
    }
    std::cout<<"]"<<std::endl;
}
int main(){
    std::list<int> li;

    li.push_back(10);
    li.push_back(20);
    li.push_back(30);
    li.push_back(40);

    std::cout<<"list's first state: "<<std::endl;
    print_list(li);

    for(std::list<int>::iterator it=li.begin();it!=li.end();it++){
        if(*it==20){
            li.insert(it,50);
        }
    }
    std::cout<<"insert 50 infront of 20"<<std::endl;
    print_list(li);

    for(std::list<int>::iterator it=li.begin();it!=li.end();it++){
        if(*it==30){
            li.erase(it);
            break;
        }
    }
    std::cout<<"if 30,erase"<<std::endl;
    print_list(li);
}