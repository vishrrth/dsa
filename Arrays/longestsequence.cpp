#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
// int longest(int a[],int n){
// int ans=0;
//     for(int i=0;i<n;i++){
//         int ele=a[i];
//         int count=1;
//         while(true){
//             bool found=false;
//             for(int j=0;j<n;j++){
//                 if(ele+1==a[j]){
//                     count++;
//                     ele++;
//                     found =true;
//                 }
//             }
//              if(found==false)
//             break;
//             ans=max(ans,count);
//         }
//     }
//     return ans;
// }
// better
// int longest(int a[],int n){
//     sort(a,a+n);
//     int current=0,lastcurrent=INT8_MIN,count=0,maxi=0;
//     for(int i=0;i<n;i++){
//         current=a[i];
//         if(current-1==lastcurrent){
//             lastcurrent=current;
//             count++;
//         }
//         if (current==lastcurrent){

//         }
//         if (current!=lastcurrent){
//           lastcurrent=a[i];
//           count=1;
//         }
//         maxi=max(maxi,count);
//     }
//     return maxi;
// }
//optimal

int longest(int a[],int n){
    unordered_set <int> ans;
    int maxi=0;
    for(int i=0;i<n;i++){
        ans.insert(a[i]);
    }
    for(auto it:ans){
        if(ans.find(it-1)==ans.end()){
            int x=it;
            int count=1;
        while(ans.find(x+1)!=ans.end()){
            count++;
            x++;}
           maxi=max(count,maxi);}}

        return maxi;
    
}
int main(){
    int a[]={100,101,102,103,1,101,101010,1,2,3,4,5,6};
    cout<<longest(a,13);
}