// Jonathan Coutinho Alves Santos   

#include <stdio.h>

int main(void){

    int cont = 0;
    unsigned long long int rep = 0;
    unsigned long long int i, hash;
    unsigned long long int a, b, x, n, c, d, m;

    scanf("%d", &cont);
    while (cont > 0){
        scanf("%lu %lu %lu %lu %lu %lu %lu", &a, %b, &x, &n, &c, &d, &m);

        for (i = 0; i < n; i++){
            hash = (a *(x + i) + b)% m;
            if(hash >= c && hash <= d){
                rep ++; 
            }
        }
    printf("%llu\n", rep);
    rep = 0;

    }

}