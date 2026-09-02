#include <iostream>
using namespace std;
void pattern(int n){
for(int i=0;i<n;i++){
    for(int j=0;j<(n-i);j++){
        cout<<"*";
    }
    for(int j=0;j<(2*i);j++){
        cout<<" ";
    }
    for(int j=0;j<(n-i);j++){
        cout<<"*";
    }
    cout<<endl;
}}
void pattern1(int n){
    int spaces=2*n-2;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=0;j<spaces;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
    spaces-=2;
}}
int main()
{
    pattern(5);
    pattern1(5);
} 