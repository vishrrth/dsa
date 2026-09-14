#include <iostream>
#include <unordered_map>
using namespace std;
// int longest(int a[],int n,int k){
//     int len=-1;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//         sum+=a[j];
         
//          if(sum==k)
//          len=max(len,j-i+1);}
         

//         }
//   return len;
//     }
// int longest(int a[],int n,int k){
//     unordered_map <int,int> prefix;
//     int len=0;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=a[i];
//         if(sum==k){
//             len=max(len,i+1);
//         }
//         int rem=sum-k;
//         if(prefix.find(rem)!=prefix.end()){
//            len=max(i-prefix[rem],len);}
//          prefix[i]=sum;

// }
// return len;}
//optimal
int longest(int a[],int n,int k){
   int left=0;
   int right=0;
   int sum=a[0];
   int len=0;
    while(right<n){
    
        while(left<=right &&sum>k){
            sum-=a[left];
            left++;
        }
                   
                                                                                                                
        if(sum==k){
            len=max(len,right-left+1);
 }    right++;
     if(right<n){
        sum+=a[right];}
     }return len;}


int main(){
    int a[]={1,1,1,1,1,1,2,3,4,5,6,5,1};
    cout<<longest(a,sizeof(a)/sizeof(a[0]),6);
}