#include<stdio.h>

void main()
{
    float x[100], y[100], input, numerator_product, denominator_product, L, output=0;
    int n, i, j, d=1;
    printf("Enter the number of terms in the table: ");
    scanf("%d", &n);
    printf("Enter the respective values of x and y : \n");
    for (i=0; i<n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
    }
    printf("The table you entered is as follows: \n");
    for(i=0; i<n; i++)
    {
        printf("%0.3f \t %0.3f\n", x[i], y[i]);
    }

    while(d==1)
    {
        printf("Enter the value of x to find the respective value of y: ");
        scanf("%f", &input);
        for(i=0; i<n; i++)
        {
            numerator_product = 1;
            denominator_product = 1;
            for(j=0; j<n; j++)
            {
                if(j!=i){
                    numerator_product *= (input-x[j]);
                    denominator_product *= (x[i]-x[j]);
                }
            }
            L = numerator_product/denominator_product;
            output += L*y[i];
        }
        printf("\nThe respective value of variable x is = %f", output);
        printf("\nDo you want to continue? if yes press 1 and 0 to exit. ");
        scanf("%d", &d);
    }

}
