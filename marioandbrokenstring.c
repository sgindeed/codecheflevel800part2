/*Mario was going to gift Princess Peach a string SS of even length NN.

Mario was clumsy and thus, broke the string in the middle. He now has two strings AA and BB such that A = S[1, \frac{N}{2}]A=S[1, 
2
N
​
 ] and B = S[\frac{N}{2} + 1, N]B=S[ 
2
N
​
 +1,N].

Mario is not sure about the order in which he should join the strings AA and BB to get the string SS. Thus, he joins the strings in any random order. Find whether it is guaranteed that Mario will get the same string SS if he joins the strings AA and BB in any order.

Note that S[L, R]S[L,R] denotes a substring of string SS starting at index LL and having a length (R - L + 1)(R−L+1).*/

#include <stdio.h>
#include<string.h>
int main(void) {
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char s[n];char a[n/2];
        char b[n/2];int c=0;
        scanf("%s",s);
        for(int i=0,j=n/2;i<n/2,j<n;i++,j++)
        {
            if(s[i]!=s[j])
            {
                c++;
                break;
            }
        }
        if(c==0)
        printf("YES\n");
        else printf("NO\n");
    }
	// your code goes here
	return 0;
}
