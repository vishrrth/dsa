#include <iostream>
using namespace std;
void pattern(int n)
{int number=1;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
   cout<<number<<" "; 
   number++;
}
cout<<endl;
}}
int main()
{
    pattern(5);
}