/*Chef has two numbers AA and BB.

In one operation, Chef can choose either AA or BB and multiply it by 22.

Determine whether he can make both AA and BB equal after any number (possibly, zero) of moves.*/

#include <stdio.h>

int main(void) 
{
	int i,t,a,b;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
	    scanf("%d%d",&a,&b);
	    int flag=0;
	    while(a>b)
	    {
	        b=b*2;
	        if(b==a)
	        {
	            flag=0;
	            break;
	        }
	    }
	    while(a<b)
	    {
	        a=a*2;
	        if(a==b)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1 || a==b)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}
