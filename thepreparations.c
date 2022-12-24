/*Chef has an exam which will start exactly MM minutes from now. However, instead of preparing for his exam, Chef started watching Season-11 of Superchef. Season-11 has NN episodes, and the duration of each episode is KK minutes.

Will Chef be able to finish watching Season-11 strictly before the exam starts?

\textbf{Note:}Note: Please read the explanations of the sample test cases carefully.

Input Format
The first line contains an integer TT denoting the number of test cases. TT test cases then follow.
The first and only line of each test case contains 33 space separated integers MM, NN and KK.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m,n,k;
	    scanf("%d %d %d",&m,&n,&k);
	    if(n*k < m)
	    printf("\nYES");
	    else
	    printf("\nNO");
	}
	return 0;
}

