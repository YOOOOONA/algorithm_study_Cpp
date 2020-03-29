#include <iostream>
#include <vector>
#include <algorithm>
const int MAX=100000;
int N,M;
std::vector<int> A;
//cin의 속도 향상을 위해 ios_base::sync_with_stdio(0);cin.tie(0); 를 추가해주고 개행할 때 endl 대신 "\n"를 써줘야한다는 점입니다.
int binarySearch(int low, int high, int target){
    if (low>high)
        return 0;
    else{
        int mid = (low+high)/2;
        if (A[mid]==target)
            return 1;
        else if(A[mid]>target)
            return binarySearch(low,mid-1,target);
        else
            return binarySearch(mid+1,high,target);
    }
    return 0;
}
int main(){
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin>>N;

    for (int i=0;i<N;i++){
        int num;
        std::cin>>num;
        A.push_back(num);
    }
    sort(A.begin(),A.end());//이분탐색은 전제조건이 정렬

    std::cin>>M;
    for(int i=0;i<M;i++){
        int num;
        std::cin>>num;
        std::cout<<binarySearch(0,N-1,num)<<"\n";
    }
    return 0;
}