#include <bits/stdc++.h>

int main(){
    int w,k,n,prt,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for (int i = 1; i <= w; i++) {
        sum+=i*k;
    }
    if(n<sum){
    prt=sum-n;}
    else if(n>=sum){
        prt=0;
    }
    printf("%d",prt);
}
