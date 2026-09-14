#include <iostream>
using namespace std;
int maxone(int a[],int n){
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++){
    if(a[i]==1){
        count++;
        maxi=max(count,maxi);
    }
    }
    return maxi;
}
int main(){
    int a[]={1,2,1,1,1,1,1,1,3,4,5,6,2,3,3,};
    cout<<maxone(a,sizeof(a)/sizeof(a[0]));

}
