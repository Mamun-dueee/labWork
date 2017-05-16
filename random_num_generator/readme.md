## Random Number Generation

### Problem Description: 
We have to generate a set of random number with a range given by 
the user.How many random number have to generate also given by user.
	
### Algorithm:
Step 1: Start.

Step 2: Initialize variables.

Step 3: Prompt to user.

Step 4: Take input from user.

Step 5: Generate random numbers.

Step 6: Print those number.

Step 7: End.

### Source Code: 
(*C programming language*)
```c
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
    for(i=0; i<n; i++)
    {
        r = (rand()%m) + a;
        printf("%d\n", r);
    }

}
```

### Input:
The first input from user is the number of random number to generate.
The second two input is the range within which we have to generate random numbers.

### Output:
A set of random number within the given range.The following figure shows the output. 

![Imgur](http://i.imgur.com/hndDhN6.png)

### Discussion: 
`rand()` function returns a pseudorandom number, that means it returns same number everytime it runs. 
But if we set `srand()` to different numbers in different time, the `rand()` function return true random number
between 0 to `RAND_MAX` . So we set `srand()` to current time by `time()` function to produce different random number 
everytime. 

### Reference: 
1. [Stackoverflow.com](http://stackoverflow.com/questions/18254325/random-number-generator-in-c)
