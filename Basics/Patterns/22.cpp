#include <iostream>
using namespace std;
void pattern(int n){
    for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
    
        int left=i;
        int right=(2*n-2)-i;
        int bottom =(2*n-2)-j;
        int top=j;
        cout<<n-min(min(left,right),min(bottom,top));

        }
        cout<<endl;
    }}

int main(){
    pattern(4);
}