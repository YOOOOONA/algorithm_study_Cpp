#include <iostream>
#include <vector>
int sear(std::vector<int> vec,int target){
    int cnt=0;
    int l=vec.size();

    for (int i =l;i>=0;i--){
        
        for (int j=0;j+i<l;j++){
            int sum=0;
            for (int k=j;k<=j+i;k++){
                sum+=vec[k];
            }
            if (sum==target) cnt+=1;
        }        
    }
    return cnt;
}
int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    int n,m;
    std::vector<int> vec;
    std::cin>>n>>m;
    for (int i=0;i<n;i++){
        int num;
        std::cin>>num;
        vec.push_back(num);
    }
    std::cout<<sear(vec,m)<<std::endl;
}