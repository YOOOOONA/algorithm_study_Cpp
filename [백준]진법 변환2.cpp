#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int b;
    cin >> b;

    vector<int> v;

    while(1){
        v.push_back(n%b);
        n /= b;
        if(n==0) break;
    }

    vector<int>::reverse_iterator it;
    for(it = v.rbegin(); it!=v.rend(); it++){
        if(*it>=10){
            char c = *it-10+'A';
            cout << c;
        }else{
            cout << *it;
        }
    }
    return 0;
}