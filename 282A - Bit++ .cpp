#include <bits/stdc++.h>
using namespace std;

int main() {
    char first_value,midele_value,last_value;
    int num,count=0;
    scanf("%d",&num);
    for (int i = 0; i < num; i++) {
        // inside scanf first value use whitespech.
        scanf(" %c%c%c",&first_value,&midele_value,&last_value);
        if(midele_value =='+'){
            count++;
        } else if(midele_value=='-'){
            count--;
        }
    }
    printf("%d",count);
    return 0;
}

