/*Chef is planning to buy a new car for his birthday. After a long search, he is left with 22 choices:

Car 1: Runs on diesel with a fuel economy of x_1x 
1
​
  km/l
Car 2: Runs on petrol with a fuel economy of x_2x 
2
​
  km/l
Chef also knows that

the current price of diesel is y_1y 
1
​
  rupees per litre
the current price of petrol is y_2y 
2
​rupees per litre
Assuming that both cars cost the same and that the price of fuel remains constant, which car will minimize Chef's expenses

If it is better to choose Car 1, print -1−1
If both the cars will result in the same expenses, print 00
If it is better to choose Car 2, print 11*/

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	   float  x1,x2,y1,y2;
	    scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	    if(y1/x1<y2/x2){
	        printf("-1\n");
	    }
	    else if(y1/x1>y2/x2){
	        printf ("1\n");
	    }
	    else{
	        printf("0\n");
	  
	}
	
	}

	return 0;
}
