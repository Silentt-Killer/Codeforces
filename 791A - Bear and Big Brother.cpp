#include <bits/stdc++.h>
using namespace std;

int main() {
    int limka,bob,i=0;
    scanf("%d %d",&limka,&bob);
    while ( limka<=bob){
        limka=limka*3;
        bob=bob*2;
        i++;
    }

    printf("%d",i);
    return 0;
}

