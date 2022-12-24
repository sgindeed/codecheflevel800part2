/*Chef visited a grocery store for fresh supplies. There are NN items in the store where the i^{th}i 
th
  item has a freshness value A_iA 
i
​
  and cost B_iB 
i
​
 .

Chef has decided to purchase all the items having a freshness value greater than equal to XX. Find the total cost of the groceries Chef buys.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x;
	    scanf("%d %d",&n,&x);
	    int i,a[n],b[n];
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	    scanf("%d",&b[i]);
	    int sum = 0;
	    
	    for(i=0;i<n;i++)
	    {
	        if(a[i] >= x)
	        {
	            sum = sum + b[i];
	            
	        }
	    }
	    
	    printf("%d\n",sum);
	}
	return 0;
}

