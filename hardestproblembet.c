/*There are 33 problems in a contest namely A, B, CA,B,C respectively. Alice bets Bob that problem CC is the hardest while Bob says that problem BB will be the hardest.

You are given three integers S_A, S_B, S_CS 
A
​
 ,S 
B
​
 ,S 
C
​
  which denotes the number of successful submissions of the problems A, B, CA,B,C respectively. It is guaranteed that each problem has a different number of submissions. Determine who wins the bet.

If Alice wins the bet (i.e. problem CC is the hardest), then output AliceAlice.

If Bob wins the bet (i.e. problem BB is the hardest), then output BobBob.

If no one wins the bet (i.e. problem AA is the hardest), then output DrawDraw.

Note: The hardest problem is the problem with the least number of successful submissions.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(c<a && c<b)
	    printf("\nAlice");
	    else if(b<a && b<c)
	    printf("\nBob");
	    else
	    printf("\nDraw");
	}
	return 0;
}

