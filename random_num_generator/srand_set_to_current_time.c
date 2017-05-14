#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i;

    srand(time(NULL));
    for(i=0; i<10; i++)
        printf("%d\n", rand());

    printf("Range of rand() is: [0 - %d].\n", RAND_MAX);

    return 0;
}
