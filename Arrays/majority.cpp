#include <iostream>
#include <map>
using namespace std;
// int majority(int a[],int n){
//     int count=0;
//     int ele=0;
//     for (int i=0;i<n;i++){
//         if(count==0){
//             ele=a[i];
//             count =1;

//         }
//         if(a[i]==ele){
//             count++;
//         }
//         else {
//             count--;
//         }
        

//     }
//     count=0;
//     for(int i=0;i<n;i++){
//         if(ele==a[i]){
//             count++;
//         }
//     }
//     if(count>n/2){
//         return ele;
//     }
//     return -1;
// }
int majority(int a[],int n){
    map <int,int> ans;
    for(int i=0;i<n;i++){
        ans[a[i]]++;

    }
    for(auto it:ans){
        if(it.second>n/2){
            return it.first;
        }
    }
}
int main(){
    int a[]={1,1,1,1,2,3,3,3,3,4,4,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5};
    cout<<majority(a,sizeof(a)/sizeof(a[0]));
}
