#include <iostream>
using namespace std;
// brute force
//int missing(int a[],int n){
//     for(int i=1;i<=n;i++){
//             int flag=0;
//     for(int j=0;j<n-1;j++){
//          if(a[j]==i)
//          {flag=1;
//          break;}
//         }
//     if(flag==0){
//         return i;
//     }
//     }

// }
// int missing (int a[],int n){
//     int hash[n+1]={0};
//     for(int i=0;i<n-1;i++){
//         hash[a[i]]++;
//     }
//     for(int j=1;j<n;j++){
//         if(hash[j]==0){
//             return j;
//         }
//     }
// }
// int missing(int a[],int n){
//     int sum1=0;
//     int sum=(n*(n+1))/2;
//     for(int i=0;i<n-1;i++){
//         sum1+=a[i];
//     }
//     return (sum-sum1);
int missing(int a[],int n){
    int xor1=0;
    int xor2=0;
   for(int i=0;i<n-1;i++){
        xor2^=a[i];
        xor1^=(i+1);
    }
    xor1^=n;
    return (xor1^xor2);
}
int main(){
    int a[]={1,2,3,4,5,6,8,9};
    int n=8;
    cout<<missing(a,n);

}