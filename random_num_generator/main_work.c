#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    int r, i, a, b, m, n;
    srand(time(NULL));
    printf("Enter the no. of random numbers: \n");
    scanf("%d", &n);
    printf("Enter the random number range: \n");
    scanf("%d %d", &a, &b);
    m = b-a+1;
    printf("%d random number from %d to %d are:\n", n, a, b);
    for(i=0; i<n; i++)
    {
        r = (rand()%m) + a;
        printf("%d\n", r);
    }

}
