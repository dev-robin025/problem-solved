#include <stdio.h>
#include <string.h>

// source ==> https://codeforces.com/problemset/problem/71/A

int main(){
    int n;
    scanf("%d",&n);

    char words[n][100];

    for(int i=0;i<n;i++){
        scanf("%s",words[i]);

        if(strlen(words[i])>10){
            int length = strlen(words[i]);
            char first = words[i][0];
            char last = words[i][length-1];

            printf("%c%d%c\n",first,length-2,last);
        }else printf("%s\n",words[i]);
    }

    return 0;
}