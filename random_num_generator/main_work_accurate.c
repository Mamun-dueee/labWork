#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int r, i, a, b, m, n, x;
    srand(time(NULL));
    printf("Enter the no. of random numbers: ");
    scanf("%d", &n);
    printf("Enter the Upper limit of random number: ");
    scanf("%d", &m);
    printf("RAND_MAX = %d\n", RAND_MAX);

    printf("Output(using RAND_MAX): %d random number(s) between 0 - %d \n", n, m);
    for(i=0; i<n; i++)
    {
        do {
            x = rand();
        } while (x >= (RAND_MAX - RAND_MAX % m ));

        //x %= m;
        printf("%d ---> %d\n", x, x%m);
    }

    printf("Output (using modulus): \n");
    for(i=0; i<n; i++)
    {
        printf("%d ---> %d\n", rand(), rand()%m);
    }

}




