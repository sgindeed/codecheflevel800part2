/*Chef has AA units of solid and BB units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?

A mixture is called :

A solution if A \gt 0A>0 and B \gt 0B>0,

A solid if B = 0B=0, or

A liquid if A = 0A=0.*/

#include <stdio.h>

int main(void) {
	// your code goes here 
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d%d",&a,&b);
	    if(a>0 && b>0){
	        printf("Solution\n");
	    }
	    else if(a>0 && b==0){
	        printf("Solid\n");
	    }
	    else if(a==0 && b>0){
	        printf("Liquid\n");
	    }
	    }
		return 0;
}
