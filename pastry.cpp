#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    int n_1=factorial(n-1);
    int no=n_1*n;
    return no;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int k;
    cin>>k;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=i;j++){
            cout<<factorial(i)/(factorial(i-j)*factorial(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
