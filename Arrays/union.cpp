#include <iostream>

#include <vector>
using namespace std;
vector <int> uni(int a[],int b[],int n1,int n2){
    vector <int> ans;
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(a[i]<=b[j]){
        if(ans.size()==0||ans.back()!=a[i])
        {  ans.push_back(a[i]);
        }          i++;}
         else{
        if(ans.size()==0||ans.back()!=b[j])
        {  ans.push_back(b[j]);
        }          j++;}

    }
    while(i<n1){
        if(ans.back()!=a[i])
        {ans.push_back(a[i]);}i++;
    }
    while(j<n2){
        if(ans.back()!=b[j])
        {ans.push_back(b[j]);
}j++;
    }
    return ans;
}
int main(){
    int a[]={1,2,2,2,2,2,3,3,3,4,5,5};
    int b[]={3,4,4,4,4,5,5,6};
    vector<int> ans=uni(a,b,sizeof(a)/sizeof(a[0]),sizeof(b)/sizeof(b[0]));
    for(int x:ans){
        cout<<x<<endl;
    }
}