#include <bits/stdc++.h>
using namespace std;

int main() {
    char first_valur,midele_value,last_value;
    int num,count=0;
    scanf("%d",&num);
    for (int i = 0; i < num; i++) {
        scanf(" %c%c%c",&first_valur,&midele_value,&last_value);
        if(midele_value =='+'){
            count++;
        } else if(midele_value=='-'){
            count--;
        }
    }
    printf("%d",count);
    return 0;
}

