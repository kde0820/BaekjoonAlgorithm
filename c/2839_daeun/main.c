#include <stdio.h>
int main(){
    int N;
    int result = 0;
    int check = 0;
    scanf(" %d", &N);
    
    for(int i = N/5; i>=0; i--){
        if((N - 5*i) % 3 == 0){
            result = i + (N - 5*i) / 3;
            check = 1;
            break;
        }
    }
    
    if(check){
        printf("%d", result);
    }else{
        printf("%d", -1);
    }
    
    return 0;
}