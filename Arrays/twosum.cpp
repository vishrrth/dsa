#include <iostream>
#include <map>
#include <string>
using namespace std;
// string twosum(int a[],int n,int k){
//     map <int,int> ans;
//     for(int i=0;i<n;i++){
//         ans[i]=a[i];
//         if(ans.find(k-a[i])!=ans.end())
//         {
//             return "YES";
//         }
//     }
//     return "NO";
// }
string twosum(int a[],int n,int k){
    int left=0;
    int right=n-1;
    while(left<right){
     if(a[left]+a[right]<k){
        left++;
     }
     else if(a[left]+a[right]>k){
        right--;
     }
     else if(a[left]+a[right]==k){
        return "yes";
     }
    }
    return "N0";
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    cout<<twosum(a,sizeof(a)/sizeof(a[0]),18);
}