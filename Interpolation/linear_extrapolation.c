#include<stdio.h>

void main()
{
    int i, j, n, d=1;
    float x[100], y[100], input, output;
    printf("The number of terms in the table: ");
    scanf("%d", &n);
    printf("Enter the respective value of y for x: \n");
    for(i=0; i<n; i++){
        scanf("%f %f", &x[i], &y[i]);
    }
    printf("Your entered values is as (x, y):\n");
    for(i=0; i<n; i++){
        printf("%5.3f \t %5.3f\n", x[i], y[i]);
    }
    while(d==1){
        printf("Enter the value of x to find respective y: ");
        scanf("%f", &input);
        output = y[n-1]+(input-x[n-1])*(y[n-2]-y[n-1])/(x[n-2]-x[n-1]);
        printf("The value of y for x is : %.2f\n", output);
        printf("Press 1 to continue, 0 to exit: ");
        scanf("%d", &d);
    }
}
