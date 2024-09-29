#include <iostream>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int i;
    cin>>i;

    int rev=0;
    while(i!=0){
        int lastdig=i%10;
        rev=rev*10+lastdig;
        i=i/10;
    }
    cout<<rev;
}
