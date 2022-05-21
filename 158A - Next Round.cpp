#include <bits/stdc++.h>
using namespace std;

int main() {
    int score[101],n,k,count=0;
    scanf("%d %d",&n,&k);
    for (int i = 1; i <= n; i++) {
        scanf(" %d",&score[i]);
    }
    for (int i = 1; i <= n; i++) {
       if(score[i]>=score[k] && score[i]>0){
           count++;
       }
    }
    printf("%d",count);
    return 0;
}
