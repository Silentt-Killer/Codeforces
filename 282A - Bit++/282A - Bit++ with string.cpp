#include <bits/stdc++.h>
using namespace std;

int main() {
    char value[101];
    int num,count=0;
    scanf("%d",&num);
    for (int i = 0; i < num; i++) {
        scanf("%s",&value);
        if(value[1] =='+'){
            count++;
        } else if(value[1]=='-'){
            count--;
        }
    }
    printf("%d",count);
    return 0;
}

