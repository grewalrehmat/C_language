#include<stdio.h>

int rec(int n);

int fac(int n);

int fub(int n);

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    printf("sum is %d \n ",rec(10));
    printf("Factorial = %d \n ",fac(4));
    int n;
    int k=0; //error check for loop fibunacci.
    int o=0;
    int s=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        k=2*i-1;

    }

    printf("%d",k);
    

    return 0;
}

int rec(int n){
    if (n==1){
        return 1;
    }
    int sm1= rec(n-1);
    int sum=sm1+n;
    return sum;
}

int fac(int n){
    if (n==1){
        return 1;
    }
    int nm1= fac(n-1);
    int num=nm1*n;
    return num;
}


int fub(int n){
    if(n==1 || n==0){
        if(n==0){
            return 0;
        }
        if (n==1){
            return 1;
        }
    }

    int n_2=fub(n-2);
    int n_1=fub(n-1);
    int num= n_1 + n_2;
    return num;
}
