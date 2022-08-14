#include<stdio.h>
#include<stdint.h>

int main(){

    uint32_t number;
    scanf("%d",&number);

    onesCount(number);

    

    return 0;
}

int onesCount(uint32_t mask){
    
    int value, n;
    value = 0;

    for(n=0; n < 32; n++){
        if(mask & (1 << n)){
            value++;
            //printf("n = %d, value = %d\n", n, value);
        }
    }

    printf("Count of 1: %d \n", value);
    return 0;

} 