/*Chef has two integers AA and BB. In one operation he can choose any integer d,d, and make one of the following two moves :

Add dd to AA and subtract dd from BB.
Add dd to BB and subtract dd from AA.
Chef is allowed to make as many operations as he wants. Can he make AA and BB equal?

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers A, BA,B.*/

#include <stdio.h>

int main(void) {
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int c=abs(a-b);
	    if(c%2==0)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}
