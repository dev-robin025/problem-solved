#include <stdio.h>

// source ==> https://codeforces.com/problemset/problem/263/A

int main(){
    int matrix[5][5],x,y;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) {
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]==1){
                x=i;
                y=j;
            }
        }
    }

    int move=0;
    if(x>2) move+=(x-2);
    else move+=(2-x);

    if(y>2) move+=(y-2);
    else move+=(2-y);

    printf("%d",move);

    return 0;
}