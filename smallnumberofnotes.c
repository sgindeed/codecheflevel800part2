/*Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++){
	    int N,a,b,c,d,e,f;
	    scanf("%d",&N);
	    a=N/100;
	    b=(N-a*100)/50;
	    c=(N-a*100-b*50)/10;
	    d=(N-a*100-b*50-c*10)/5;
	    e=(N-a*100-b*50-c*10-d*5)/2;
	    f=(N-a*100-b*50-c*10-d*5-e*2);
	    printf("%d\n",a+b+c+d+e+f);
	}
	return 0;
}
