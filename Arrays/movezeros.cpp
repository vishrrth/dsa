#include <iostream>
#include <vector>
using namespace std;
//brute force method
// void move(int a[],int n){
//     vector <int> temp;
//     for(int i=0;i<n;i++){
//         if(a[i]!=0)
//         temp.push_back(a[i]);
//     }
//     for(int i=0;i<temp.size();i++){
//         a[i]=temp[i];
//     }
//     for(int i=temp.size();i<n;i++){
//         a[i]=0;
//     }
vector <int> move(vector <int> a,int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        {j=i;
        break;}
        
        if(j==-1)return a;
    }
    for(int i=j+1;i<n;j++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
    }
}
int main(){
    vector <int> a={1,2,3,4,5,6,0,2,30,20,0,0,0,0,0,3,4,5};
    move(a,sizeof(a)/sizeof(a[0]));
    for(auto it:a){
        cout<<it<<endl;
    }
}