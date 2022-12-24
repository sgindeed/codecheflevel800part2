/*Recently, Devendra went to Goa with his friends. Devendra is well known for not following a budget.

He had Rs. ZZ at the start of the trip and has already spent Rs. YY on the trip. There are three kinds of water sports one can enjoy, with prices Rs. AA, BB, and CC. He wants to try each sport at least once.

If he can try all of them at least once output YES, otherwise output NO.*/

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int z,y,a,b,c;
	    scanf("%d %d %d %d %d",&z,&y,&a,&b,&c);
	    if((a+b+c)<=(z-y)) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}