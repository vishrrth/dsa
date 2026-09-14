#include <iostream>
using namespace std;
void rotate(int a[],int n){
    int temp=a[0];
    for(int i=1;i<n;i++)
    a[i-1]=a[i];
    a[n-1]=temp;
}
int main(){
int a[]={1,2,3,4,5,6,7};
rotate(a,sizeof(a)/sizeof(a[0]));
for(auto it:a){
    cout<<it<<endl;
}
}
