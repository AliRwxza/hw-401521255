#include <stdio.h>
#include <math.h>

int random(int k){
    int m;

    m = k*8;

    return m;
}

int isprime(int input){
    while(input != 0){
        if (input >= 800000 || input < 200000 && input >= 100000 || input ==1 ){
            return 0;
        }
        
        for(int i = 2; i <= sqrt(input); i++){
            if(input%i == 0)
                return 0;
        }

        if(count != 0){
            return 0;
        }

        input/=10;
    }

    return 1;
}

int main(){
    int power;
    int l;

    scanf("%d", &l);
    scanf("%d", &power);

    for(int i = pow(10, power-1); i < pow(10, power); i++){
        if (isprime(i)){
            printf("%d\n", i);
        }
    }

    printf("%d", random(l));

    return 0;
}

//this is some random comment !