/*You are given the height HH (in metres) and mass MM (in kilograms) of Chef. The Body Mass Index (BMI) of a person is computed as \frac{M}{H^2} 
H 
2
 
M
​
 .

Report the category into which Chef falls, based on his BMI:

Category 1: Underweight if BMI \leq 18≤18
Category 2: Normal weight if BMI \in \{19∈{19, 2020,\ldots…, 24\}24}
Category 3: Overweight if BMI \in \{25∈{25, 2626,\ldots…, 29\}29}
Category 4: Obesity if BMI \geq 30≥30*/

#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while (t--){
	    int m,h,bmi;
	    scanf("%d%d",&m,&h);
	    bmi=m/pow(h,2);
	    if(bmi<=18){
	        printf("1\n");
	    }
	    else if(bmi>=19 && bmi<=24){
	        printf("2\n");
	    }
	     else if(bmi>=25 && bmi<=29){
	        printf("3\n");
	     }
	    else if(bmi>=30){
	        printf("4\n");
	    }
	     }
	return 0;
}
