#include <iostream>
#include <unordered_map>
using namespace std;
int count (int a[],int n,int k){
    unordered_map <int,int> ans;
    int  presum=0;
    int count=0;
    ans[0]=1;
    for(int i=0;i<n;i++){
        presum+=a[i];
        count+=ans[presum-k];
        ans[presum]++;


    }
    return count;

}
int main(){
    int a[]={1,2,3,4,4,5,1,2,1,1,-2,-3};
    cout<<count(a,11,3)<<endl;

}