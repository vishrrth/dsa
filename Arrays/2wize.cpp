#include <iostream>
#include <map>

using namespace std;
// int once(int a[],int n){
//     int xor1=0;
//     for(int i=0;i<n;i++){
//      xor1^=a[i];
//     }
//     return xor1;
// }
// int once(int a[],int n){
//     map<int ,int> ans;
//     for(int i=0;i<n;i++){
//      ans[a[i]]++;
//     }
//     for(auto it:ans){
//         if(it.second==1){
//             return it.first;
//         }
//     }
// }
int once(int a[],int n){
    int maxi=a[0];
    for(int i=0;i<n;i++){
    maxi=max(a[i],maxi);
    }
    int hash[maxi+1]={0};
    for(int i=0;i<n;i++){
        hash[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(hash[a[i]]==1)
        return a[i];
    }

}
int main(){
    int a[]={1,1,2,2,3,3,4,5,5,6,6};
    cout<<once(a,sizeof(a)/sizeof(a[0]));
}