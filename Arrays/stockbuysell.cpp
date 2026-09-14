#include <iostream>
using namespace std;
// int profit(int a[],int n){
//     int maxprofit=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//          maxprofit=max(maxprofit,a[j]-a[i]);
//         }
//     }
//     return maxprofit;
// }
int profit(int a[],int n){
    int min=INT32_MAX;
    int maxprofit=0;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        else{
        maxprofit=max(maxprofit,a[i]-min);
        }


    }
    return maxprofit;
}
int main(){
    int a[]={1,2,3,4,6,7};
    cout<<profit(a,sizeof(a)/sizeof(a[0]));
}
