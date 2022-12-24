/*Chef has three socks in his drawer. Each sock has one of 1010 possible colours, which are represented by integers between 11 and 1010. Specifically, the colours of the socks are AA, BB, and CC.

Chef has to wear two socks which have the same colour. Help Chef find out if that is possible or not.*/

#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b || b==c || a==c)
    printf("yes\n");
    else
    printf("no\n");
    
    return 0;
}
