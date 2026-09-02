#include <iostream>
using namespace std;
void pattern(int n){
int spaces=2*n-2;
for(int i=1;i<=2*n-1;i++){
    if(i<=n){
  

    
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=spaces;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    if (i<n)
    spaces-=2;
}
else
{
        spaces+=2;
    for(int j=0;j<(2*n-i);j++){
        cout<<"*";
    }
    for(int j=0;j<(spaces);j++){
        cout<<" ";
    }
    for(int j=0;j<(2*n-i);j++){
        cout<<"*";
    }
    cout<<endl;

}}}
int main(){
    pattern(5);
}