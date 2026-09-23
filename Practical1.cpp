#include <iostream>
using namespace std;
int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int ncr(int n, int r){
    int res;
    res=fact(n)/(fact(r)*fact(n-r));
    return res;
}
void pascal(int n){
    for (int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int j=0; j<=i; j++){
            cout<< ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the number of rows: ";
    cin>>n;
    pascal(n);
    return 0;
}
