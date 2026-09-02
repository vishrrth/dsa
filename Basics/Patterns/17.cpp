#include <iostream>
using namespace std;
void pattern(int n){
for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
    cout<<" ";
    
}
  char a='A';
for(int j=0;j<2*i+1;j++){
    cout<<a;
    if(j<((2*i+1)/2))
        a++;
    else
    a--;

    }

for(int j=0;j<n-i-1;j++){
    cout<<" ";
}
cout<<endl;
}}
int main()
{
    pattern(5);
} 