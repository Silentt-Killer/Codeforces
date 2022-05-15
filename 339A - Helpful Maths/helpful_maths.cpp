#include <bits/stdc++.h>
using namespace std;

int main() {
    int temp;
    char num[101];
    scanf("%s",&num);
    int size= strlen(num);
    // increment +2 because avoide + sign
    for (int i = 0; i < size-1; i=i+2) {
        for (int j = 0; j <size-1-i ; j=j+2) {
            if(num[j]>num[j+2]){
                //Swap Two Number
                temp=num[j];
                num[j]=num[j+2];
                num[j+2]=temp;
            }
        }
    }
    printf("%s",num);
}
