/*Given the time control of a chess match as a + ba+b, determine which format of chess out of the given 44 it belongs to.

1)1) Bullet if a + b \lt 3a+b<3

2)2) Blitz if 3 \leq a + b \leq 103≤a+b≤10

3)3) Rapid if 11 \leq a + b \leq 6011≤a+b≤60

4)4) Classical if 60 \lt a + b60<a+b*/

#include <stdio.h>

int main(void) {
	// your code goes here 
	int t;
	scanf("%d",&t);
	while (t--){
	    int a,b;
	    scanf("%d%d",&a,&b);
	    if(a+b<3){
	        printf("1\n");
	    }
	    else if(3<=a+b &&a+b <=10){
	        printf("2\n");
	    }
	    else if(11<=a+b &&a+b <=60){
	        printf("3\n");
	    }
	    else if(a+b>60){
	        printf("4\n");
	    }
	}
	return 0;
}
