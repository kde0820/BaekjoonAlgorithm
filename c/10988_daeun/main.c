#include <stdio.h>
#include <string.h>

int main(){
    char input[100];
    gets(input);
    int length = (int) strlen(input);
    int i = 0;
    int j = length-1;
    int answer = 0;
    
    while (1) {
        if(input[i] != input[j])
            break;
        
        if((i == j) || (i +1 == j)){
            answer = 1;
            break;
        }
        i++;
        j--;
    }
    printf("%d", answer);
    return 0;
}