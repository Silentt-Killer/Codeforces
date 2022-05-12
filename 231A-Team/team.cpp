#include <bits/stdc++.h>

int main(){
    int num,Petya,Vasya,Tonya,count=0;
    scanf("%d",&num);
    for (int i = 0; i < num; ++i) {
        scanf("%d %d %d",&Petya,&Vasya,&Tonya);
        if((Tonya+Vasya+Petya)>=2){
            count++;
        }
    }
    printf("%d",count);
}
