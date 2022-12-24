/*There is a circular track of length MM consisting of MM checkpoints and MM bidirectional roads such that each road has a length of 11 unit.

*/

#include <stdio.h>

int main(void) {
	// your code goes here 
	int t;
	scanf("%d",&t);
	while(t--){
	    int A,B,M;
	    scanf("%d%d%d",&A,&B,&M);
	      if((A-B)>0)
	    {
	    	if ((A-B)>(M/2))
		    {
		        printf("%d\n", M-(A-B));
		    }
	        else
	        {
	           printf("%d\n", A-B);
	        }
	    }
		else
		{
		    if((B-A)>(M/2))
		    {
		        printf("%d\n", M -(B-A));
		    }
		    else
		    {
		        printf("%d\n", B-A);
		    }
		}
	
	}
	    
	
	return 0;
}
