#include <iostream>
using namespace std;
void pattern(int n){
for(int i=0;i<n;i++){
for(char j='E'-i;j<='E';j++){
    cout<<j<<" ";
}
cout<<endl;
}}
int main()
{
    pattern(5);
} 