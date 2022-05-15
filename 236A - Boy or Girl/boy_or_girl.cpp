#include <bits/stdc++.h>
using namespace std;

int main() {
    int count=0;
    char num[100];
    scanf("%s",&num);
    int size= strlen(num);

    for (int i = 0; i < size-1; i++) {
        for (int j = i+1; j <size; j++) {
            if(num[i]==num[j]){
                count++;
                break;
            }
        }
    }
    int result=size-count;
  if(result %2==0){
      printf("CHAT WITH HER!");
  } else printf("IGNORE HIM!");
}
