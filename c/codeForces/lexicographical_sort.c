#include<stdio.h>
#include<string.h>

// source ==> https://codeforces.com/contest/112/problem/A

int main(){
    char first[100],second[100];
    // fgets(first,sizeof(first),stdin);
    // fgets(second,sizeof(second),stdin);
    scanf("%s %s",first,second);

    int len = strlen(first);

    for(int i=0;i<len;i++){
        if(first[i]>='A' && first[i]<='Z') first[i]+=32;
        if(second[i]>='A' && second[i]<='Z') second[i]+=32;

        if(first[i]<second[i]) {
            printf("-1");
            return 0;
        }else if(first[i]>second[i]){
            printf("1");
            return 0;
        }
    }

    printf("0");

    return 0;
}