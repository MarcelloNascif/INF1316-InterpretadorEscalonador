#include <stdio.h>
#include <time.h>

#define EVER ;;

int main(void){

    for(EVER){
        printf("programa 1\n");
        sleep(1);
    }

    return 0;
}