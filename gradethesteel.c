/*A certain type of steel is graded according to the following conditions.

Hardness of the steel must be greater than 50
Carbon content of the steel must be less than 0.7
Tensile strength must be greater than 5600
The grades awarded are as follows:

Grade is 10 if all three conditions are met
Grade is 9 if conditions (1) and (2) are met
Grade is 8 if conditions (2) and (3) are met
Grade is 7 if conditions (1) and (3) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the three conditions are met
Write a program to display the grade of the steel, based on the values of hardness, carbon content and tensile strength of the steel, given by the user.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    float x,y,z;
	    scanf("%f %f %f",&x,&y,&z);
	    if(x>50 && y<0.7 && z>5600){
	        printf("%d\n",10);
	    }
	    else if(x>50 && y<0.7 && z<=5600){
	        printf("%d\n",9);
	    }
	    else if(x<=50 && y<0.7 && z>5600){
	        printf("%d\n",8);
	    }
	    else if(x>50 && y>=0.7 && z>5600){
	        printf("%d\n",7);
	    }
	    else if(x>50 || y<0.7 || z>5600){
	        printf("%d\n",6);
	    }
	    else if(x<=50 && y>=0.7 && z<=5600){
	        printf("%d\n",5);
	    }
	}
	return 0;
}
