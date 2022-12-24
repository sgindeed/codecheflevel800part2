/*It is known that in regular dice, the sum of opposite faces is 77.

A regular dice is rolled and you are given the value XX showing on the top face. Determine the value on the bottom face.

Input Format
The first line will contain TT - the number of test cases. Then the test cases follow.
The first and only of each test case contains a single integer XX - the value on the top face.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    printf("\n%d",7-x);
	}
	return 0;
}

