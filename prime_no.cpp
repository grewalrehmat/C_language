#include <iostream>
using namespace std;
int main(){
        freopen("input.txt", "r" , stdin);
        freopen("output.txt" , "w" , stdout);
    int a;
    int b;
    cin>>a>>b;
    for (int num=a;num<=b;num++){
        int i;
        for (i=2;i<num;i++){
            if (num%i==0){
                break;
            }
        }
        if (i==num){
            cout<<num<<endl;
        }
        
    }


    return 0;
}
