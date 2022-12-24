/*In a company an emplopyee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the Employee's salary is input, write a program to find his gross salary.

NOTE: Gross Salary = Basic Salary + HRA + DA*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int s;
	    float g;
	    scanf("%d",&s);
	    if(s<1500)
	    g=s+(0.1*s)+(0.9*s);
	    else
	    g=s+500+(0.98*s);
	    printf("\n%.2f",g);
	}
	return 0;
}

