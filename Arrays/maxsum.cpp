#include <iostream>
using namespace std;
int maxele(int a[],int n){
    int maxi=0;
    int sum=0;
    int ansstart=0;
    int ansend=0;

    for(int i=0;i<n;i++){
        if(sum==0){
            ansstart=i;
        }
        sum+=a[i];
        if(sum<0){
            sum=0;
        }
        if(sum>maxi){
            maxi=sum;
            ansend=i;
        }
        
    }

    for(int i=ansstart;i<=ansend;i++){
        cout<<a[i]<<endl;
    }
        return maxi;
}
int main(){
    int a[]={1,2,-100,2,3,3,3,3,-100,3,3,4,5,6,8,7};
    cout<<maxele(a,sizeof(a)/sizeof(a[0]));
}