#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int length,width,stone_size,i,j;
    scanf("%lld %lld %lld",&length,&width,&stone_size);
   if((length%stone_size)==0){
       i=length/stone_size;
    }
   else if((length%stone_size) != 0){
       i=length/stone_size+1;
   }

    if((width%stone_size)==0){
        j=width/stone_size;
    }
    else if((width%stone_size) != 0){
        j=width/stone_size+1;
    }

    printf("%lld",i*j);
}
