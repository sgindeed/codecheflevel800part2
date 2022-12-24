/*Vacations have arrived and Chef wants to go to his home in ChefLand. There are two types of routes he can take:

Take a flight from his college to ChefArina which takes XX minutes and then take a bus from ChefArina to ChefLand which takes YY minutes.
Take a direct train from his college to ChefLand which takes ZZ minutes.
Which of these two options is faster?*/

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
	    if((x+y)>z)
	    {
	        printf("TRAIN\n");
	    }
	    else if((x+y)<z)
	    {
	        printf("PLANEBUS\n");
	    }
	    else
	    {
	        printf("EQUAL\n");
	    }
	}
	return 0;
}
