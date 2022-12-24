/*Chef wants to rent a car to travel to his restaurant which is NN kilometers away. He can either rent a petrol car or a diesel car.

One litre of petrol costs XX rupees and one litre of diesel costs YY rupees. Chef can travel AA kilometers with one litre of petrol and BB kilometers with one litre of diesel.

Chef can buy petrol and diesel in any amount, not necessarily integer. For example, if X = 95X=95, Chef can buy half a litre of petrol by paying 95/2 = 47.595/2=47.5 rupees.

Which car should the chef rent in order to minimize the cost of his travel?*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    float N,X,Y,a,b,p,q;
	    scanf("%f %f %f %f %f",&N,&X,&Y,&a,&b);
	    p=N/a;
	    q=N/b;
	    float m=X*p;
	    float n=Y*q;
	    if(m>n){
	        printf("DIESEL\n");
	    }
	    else if(n>m){
	        printf("PETROL\n");
	    }
	    else if(m==n){
	        printf("ANY\n");
	    }
	}
	
	return 0;
}
