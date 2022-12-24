/*Chefland has 77 days in a week. Chef is very conscious about his work done during the week.

There are two ways he can spend his energy during the week. The first way is to do xx units of work every day and the second way is to do yy (\gt x>x) units of work for the first dd (\lt 7<7) days and to do zz (\lt x<x) units of work thereafter since he will get tired of working more in the initial few days.

Find the maximum amount of work he can do during the week if he is free to choose either of the two strategies.*/

#include <stdio.h>

int main(void) {
    int t,d,x,y,z,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&d,&x,&y,&z);
        a=(7*x);
        b=((y*d)+z*(7-d));
        if(a>b)
        printf("%d\n",a);
        else printf("%d\n",b);
    }
	// your code goes here
	return 0;
}
