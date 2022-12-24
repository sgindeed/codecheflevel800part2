/*A bulb company claims that the average lifetime of its bulbs is at least XX units.

The company ran a test on NN bulbs. You are given the lifetime of N-1N−1 of these bulbs. What is the minimum non-negative integer value of lifetime the remaining bulb can have, such that the claim of the company holds true?*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x;
	    scanf("%d%d",&n,&x);
	    int a[n],i;
	    for(i=1;i<n;i++) scanf("%d",&a[i]);
	    
	    int sum=0;
	    for(i=1;i<n;i++){
	        sum=sum+a[i];
	    }
	    int p=(x*n)-sum;
	    if(p>0) printf("%d\n",p);
	    else printf("0\n");
	}
	return 0;
}
