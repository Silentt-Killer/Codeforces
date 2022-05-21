#include <bits/stdc++.h>
using namespace std;

int main() {
    int num,count=0;
    scanf("%d",&num);
    char strone[num];
    scanf("%s",strone);
    for (int i = 0; i < num; ++i) {
        if(strone[i]==strone[i+1] && strone[i]== strone[i+2]){
            count+=2;
            i++;
        } else  if(strone[i]==strone[i+1] && strone[i]!= strone[i+2]){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
