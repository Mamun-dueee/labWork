#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int x, n;
    srand(time(NULL));
    printf("Upper limit of random number: ");
    scanf("%d", &n);
    do {
        x = rand();
    } while (x >= (RAND_MAX - RAND_MAX % n));

    x %= n;
    printf("%d", x);

}
