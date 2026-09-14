#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// vector<vector <int>> rotatematrix(vector<vector<int>> &a){
//     int n=a.size();
//     vector <vector <int>> ans(n,vector<int>(n));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             ans[j][n-1-i]=a[i][j];
//         }
//     }
//     return ans;
// }
void rotatematrix(vector <vector<int>> &a){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(a[i].begin(),a[i].end());
    }
}
int main()
{
    vector<vector<int>> a = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

rotatematrix(a);

    for(int i=0; i<a.size(); i++)
    {
        for(int j=0; j<a[0].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}