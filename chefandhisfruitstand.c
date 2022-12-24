/*Chef has closed his restaurant and decided to run a fruit stand instead. His signature dish is a fruit chaat consisting of 22 bananas and 11 apple. He currently has XX bananas and YY apples. How many chaats can he make with the fruits he currently has?

Input Format
The first line will contain TT, the number of testcases. Then the testcases follow.
Each testcase consists of a single line containing two space separated integers - XX and YY*/

#include <stdio.h>

int main() {
	int n,s,r;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    scanf("%d%d",&s,&r);
	   // int k;
	    if(2*r>=s)
	    {
	       printf("%d\n",s/2);
	    }
	    else
	    {
	    printf("%d\n",r);
	    }
	}
	return 0;
}
