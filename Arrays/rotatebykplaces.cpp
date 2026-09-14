#include <iostream>
#include <vector>
using namespace std;
// //brute force approach
// void rotate(int a[],int n,int d){
//     d=d%n;
//     vector <int> temp;
//     for(int i=0;i<d;i++){
//     temp.push_back(a[i]);
//     }
//     for(int i=d;i<n;i++){
//         a[i-d]=a[i];
//     }
//     for(int i=n-d;i<n;i++){
//         a[i]=temp[i-(n-d)];
//     }
void reverse(int a[],int *left,int *right){
    while(left<right){
        int temp=*left;
        *left=*right;
        *right=temp;
        left++;
        right--;

    }
}
//optimal approach
void rotate(int a[],int n,int d){
    d=d%n;
    reverse(a,a,a+d-1);
    reverse(a,a+d,a+n-1);
    reverse(a,a,a+n-1);
}
int main(){
int a[]={1,2,3,4,5,6,7};
rotate(a,sizeof(a)/sizeof(a[0]),45);
for(auto it:a){
    cout<<it<<endl;
}
}