#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> perm(vector <int> &a,int n){
    int index=-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
        index=i;
        break;}}
    if(index==-1){
        reverse(a.begin(),a.end());
        return a;
    }
    for(int i=n-1;i>index;i--){
        if(a[i]>a[index]){
            swap(a[i],a[index]);
            break;
        }
    }
    reverse(a.begin()+1+index,a.end());
    return a;
    }
int main(){
    vector<int> v={1,2,3,4,5,1,0};
    vector <int> v1=perm(v,v.size());
    for(auto it:v1){
        cout<<it<<endl;
    }
}