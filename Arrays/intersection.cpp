#include <iostream>
#include <vector>
using namespace std;
// vector <int> inter(int a[],int b[],int n1,int n2){
//     vector <int> intersection;
//     int vis[n2]={0};
//     for(int i=0;i<n1;i++)
//     {for(int j=0;j<n2;j++){
//         if(a[i]==b[j]&& vis[j]==0){
//             vis[j]=1;
//             intersection.push_back(a[i]);
        
//             break;

//         }
//         if(a[i]<b[j]){
//             break;
//         }
//     }
//     }
// return intersection;}
vector <int> inter(int a[],int b[],int n1,int n2){
    vector <int> ans;
    int i=0;
    int j=0;
    while(i<n1 &&j<n2 ){
    if(a[i]<b[j])
    i++;
    else if(b[j]<a[i])
    j++;
    else if(a[i]==b[j]){
        ans.push_back(a[i]);
        i++;
        j++;
    }
    }
    return ans;
}
    int main(){
        vector<int> ans;
        int  a[]={1,2,2,3,3,4,4,5,6};
        int b[]={3,3,3,4,5,6,6,};
        ans=inter(a,b,sizeof(a)/sizeof(a[0]),sizeof(b)/sizeof(b[0]));
        for(int x:ans){
            cout<<x<<endl;
        }
    
    }
