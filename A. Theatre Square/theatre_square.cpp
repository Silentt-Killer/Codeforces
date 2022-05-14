#include <bits/stdc++.h>

int main(){
  long long int lenth,wdith,stone_size,i,j;
    scanf("%lld %lld %lld",&lenth,&wdith,&stone_size);
   if((lenth%stone_size)==0){
       i=lenth/stone_size;
    }
   else if((lenth%stone_size) != 0){
       i=lenth/stone_size+1;
   }

    if((wdith%stone_size)==0){
        j=wdith/stone_size;
    }
    else if((wdith%stone_size) != 0){
        j=wdith/stone_size+1;
    }

    printf("%lld",i*j);
}
