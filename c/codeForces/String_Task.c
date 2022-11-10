#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main(){
    char string[100];
    scanf("%s",string);

    int len = strlen(string);

    for(int i=0;i<len;i++){
        char lower = tolower(string[i]);
        if(!(lower=='a'||lower=='o'||lower=='y'||lower=='e'||lower=='u'||lower=='i')) {
          printf(".%c",lower);
        }
    }
    return 0;
}