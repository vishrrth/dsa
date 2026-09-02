#include <iostream>
using namespace std;
void pattern(int n)
{char a='A';
    for(int i=1;i<=n;i++){
    for(char j=0;j<i;j++){
        cout<<a<<" ";
    }
    a+=1;
    cout<<endl;
}}
int main()
{
    pattern(5);
} 