#include <iostream>
#include <vector>
using namespace std;

//brute
//  void reearange(int a[], int n){
//     vector<int> pos;
//     vector<int> neg;

//     for (int i = 0; i < n; i++) {
//         if (a[i] > 0) {
//             pos.push_back(a[i]);
//         } else {
//             neg.push_back(a[i]);
//         }
//     }
//     for(int i=0;i<n/2;i++){
//         a[2*i]=pos[i];
//         a[2*i+1]=neg[i];

//     }
// }
//optimal solution
// vector <int> rearrange( int a[],int n){
//    int pos=0;
//     int neg=1;
//     vector <int> ans(n);
//     for(int i=0;i<n;i++){
//         if(a[i]>0){
//             ans[pos]=a[i];
//         pos+=2;}
//             else{
//                 ans[neg]=a[i];
//                 neg+=2;
//             }
//     }
//     return ans;

// }
void rearrange(int a[],int n){
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
int index=2*neg.size();
        for(int i=neg.size();i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<pos.size();i++){
            a[2*i]=pos[i];
            a[2*i+1]=neg[i];
        }
int index=2*pos.size();
        for(int i=pos.size();i<neg.size();i++){
            a[index]=neg[i];
            index++;
        }
    }
}
int main(){
    int a[]={1,2,2,2,2,-1,-2,-2,-4,-8,-9,-10,-11};
    rearrange(a,sizeof(a)/sizeof(a[0]));
    for(auto it:a){
        cout<<it<<endl;
    }

}