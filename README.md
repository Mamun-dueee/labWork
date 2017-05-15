# Random Number Generator (*Using C*)
**Bold** *First of all I have to learn markdown.*
[Imgur](http://i.imgur.com/7zzSmX8.png)
[Link](http://google.com)

> rand()

I use time() function to set the srand() *(seed of rand() function)*
to current time so that every time program is run, rand() function produces
a new random number.

* rand()
* srand()
* time(NULL)

## Function used in this program:
---------------------------------
1. `rand()` this function return a psudorandom number in the range of 0 to RAND_MAX.
2. `srand()` 
3. `time()`

...
for(i=0; i<5; i++){
	printf("%d\n", rand());
}
...

