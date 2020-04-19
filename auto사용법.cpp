#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    cout << "1. int arr[] : ";
    int arr[] = {10,20,30,40,50};

    for (auto i=0;i<5;i++){
        cout << arr[i] << ", ";
    }
    cout << endl << endl;

    cout << "2. vector<int> v: ";
    vector<int> v1 = {1,2,3,4,5,6,7};
    for ( auto it=v1.begin();it<v1.end();it++){
        cout << *it << ", ";
    }
    cout << endl << endl;

    cout << "> range based for using\n";
    cout << "3. vector<char> v : ";
    vector<char> v2 = {'B','l','o','c','k'};

    for (auto elem : v2){
        cout << elem << ", ";
    }


    for (const auto& elem : v2){
        cout << elem << ",";
    }
    return 0;
}


