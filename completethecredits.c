/*In Uttu's college, a semester is said to be a:

Overload semester if the number of credits taken \gt 65>65.
Underload semester if the number of credits taken \lt 35<35.
Normal semester otherwise
Given the number of credits XX taken by Uttu, determine whether the semester is Overload, Underload or Normal.

Input Format
The first line will contain TT - the number of test cases. Then the test cases follow.
The first and only of each test case contains a single integer XX - the number of credits taken by Uttu.
You may print each character of Overload, Underload and Normal in uppercase or lowercase (for example, ovErLoAd, oVERlOAD, OVERLOAD will be considered identical).*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x>65)
	    printf("\nOverload");
	    else if(x<35)
	    printf("\nUnderload");
	    else
	    printf("\nNormal");
	}
	return 0;
}

