#include<iostream>
using namespace std;
int primeb2(int n1,int n2){
    //code for printing prime numbers b/w 2 numbers.
    int i;
    for(i=n1; i<=n2;i++){
        int j;
        for(j=2;j<n2;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
    return i;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b;
    cin>>a>>b;
    cout<<primeb2(a,b);

    return 0;
}
