#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> leader(int a[],int n){
vector<int> ans;
int maxi=INT16_MIN;
for(int i=n-1;i>=0;i--){
if(a[i]>maxi){
    maxi=a[i];
    ans.push_back(a[i]);

}


}
reverse(ans.begin(),ans.end());
return ans;
}
int main(){
    int a[]={1,3,4,56,7,8,0,9,4,2};
    vector <int> ans=leader(a,sizeof(a)/sizeof(a[0]));
    for(auto ele:ans){
        cout<<ele<<endl;
    }
}