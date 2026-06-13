// patterns are not asked in interviews but help in to understand loops in depth

// for outer loop we will take number of rows and for inner loop we will take number of columns and connect them somehow to the rows

// print them inside the inner loop and we will get the pattern

#include <bits/stdc++.h>
using namespace std;
// int main(){
//     for(int i=0; i<=5; i++){
//         for(int j=0; j<=5; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }


void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print4(n);
    }

}