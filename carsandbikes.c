/*Chef opened a company which manufactures cars and bikes. Each car requires 44 tyres while each bike requires 22 tyres. Chef has a total of NN tyres (NN is even). He wants to manufacture maximum number of cars from these tyres and then manufacture bikes from the remaining tyres.

Chef's friend went to Chef to purchase a bike. If Chef's company has manufactured even a single bike then Chef's friend will be able to purchase it.

Determine whether he will be able to purchase the bike or not.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	
	for (int i=0;i<n;i++){
	    int tyre;
	    scanf("%d",&tyre);
	    
	    if(tyre%4==2)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}
