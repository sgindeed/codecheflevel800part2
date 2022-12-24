/*Chef is a big fan of Coldplay. Every Sunday, he will drive to a park taking MM minutes to reach there, and during the ride he will play a single song on a loop. Today, he has got the latest song which is in total SS minutes long. He is interested to know how many times will he be able to play the song completely.*/

#include <stdio.h>

int main(void)
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int m,s,t;
        scanf("%d %d",&m,&s);
        t=(m/s);
        if (m<s)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",t);
        }
        
        
    }
	// your code goes here
	return 0;
}
