/*Chef prepared a problem. The admin has rated this problem for xx points.

A problem is called :

Easy if 1 \leq x \lt 1001≤x<100

Medium if 100 \leq x \lt 200100≤x<200

Hard if 200 \leq x \leq 300200≤x≤300

Find the category to which Chef’s problem belongs.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x>=1 && x<100)
	    printf("\nEasy");
	    if(x>=100 && x<200)
	    printf("\nMedium");
	    if(x>=200 && x<=300)
	    printf("\nHard");
	}
	return 0;
}

