#include <iostream>
using namespace std;
// void sort(int a[],int n){
//     int count1=0;
//     int coutn2=0;
//     int count3=0;
//     for(int i=0;i<n;i++){
//         if(a[i]==1){
//             count1++;
//         }
//         if(a[i]==2){
//             coutn2++;
//         }
//         if(a[i]==3){
//             count3++;
//         }
//     }
//     for(int j=0;j<count1;j++){
//         a[j]=0;
//     }
//     for(int j=count1;j<count1+coutn2;j++){
//         a[j]=1;
//     }
//     for(int j=count1+coutn2;j<n;j++){
//         a[j]=2;
//     }
// }
int sort(int a[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<high){
    if (a[mid]==0){
        swap(a[low],a[mid]);
        mid++;
        low++;

    }
    if(a[mid]==1){
        mid++;
    }
    if(a[mid]==2){
        swap(a[mid],a[high]);
        high--;
        mid++;
    }
    }
}
int main(){
    int a[]={0,1,2,2,2,2,2,1,1,1,1,1,0,0,0,};
    sort(a,sizeof(a)/sizeof(a[0]));
    for(int x:a){
        cout<<x<<endl;
    }
}