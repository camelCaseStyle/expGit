#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i = 1;
	while (i <= 100){
		if(i%3==0 && i%5==0){
			printf("Fizz\n");
		}
		else if(i%5==0){
			printf("Buzz\n");
		}
		else if(i%5==0){
			printf("FizzBuzz\n");
		}else{
			printf("%d\n", i);
		}
		i=i+1;
	}
	return 0;
}