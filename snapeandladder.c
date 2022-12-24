/*Professor Snape has lots of potions. Bottles containing all types of potions are stacked on shelves which cover the entire wall from floor to ceiling. Professor Snape has broken his bones several times while climbing the top shelf for retrieving a potion. He decided to get a ladder for him. But he has no time to visit Diagon Alley. So he instructed Ron Weasley to make a ladder for him. Professor Snape specifically wants a step ladder which looks like an inverted 'V' from side view.*/

#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	     float a,b;
	     scanf("%f %f",&a,&b);
         float A=sqrt(pow(a,2)+pow(b,2));
	    float B=sqrt(pow(b,2)-pow(a,2));
	    printf("%.4f %.4f\n",B,A);
	}
	return 0;
}
