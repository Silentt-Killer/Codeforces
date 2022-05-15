#include <bits/stdc++.h>
using namespace std;

int main() {
    int num,matrix[5][5];

    for (int i = 1; i <=5; i++) {
        for (int j = 1; j <=5; j++) {
            scanf("%d",&matrix[i][j]);
        }
    }

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <=5; j++) {
            if(matrix[i][j]==1){
                num= abs(i-3)+ abs(j-3);
            }
        }
    }
    printf("%d",num);
}
