/*There is a hidden word SS and a guess word TT, both of length 55.

Chef defines a string MM to determine the correctness of the guess word. For the i^{th}i 
th
  index:

If the guess at the i^{th}i 
th
  index is correct, the i^{th}i 
th
  character of MM is \texttt{G}G.
If the guess at the i^{th}i 
th
  index is wrong, the i^{th}i 
th
  character of MM is \texttt{B}B.
Given the hidden word SS and guess TT, determine string MM.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of two lines of input.
First line contains the string SS - the hidden word.
Second line contains the string TT - the guess word.*/

#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--){
	    char a[5], b[5], c[5];
	    scanf("%s", a);
	    scanf("%s", b);
	    for(int i=0; i<5; i++){
	        if(a[i]==b[i]) {
	            printf("G");
	        }
	        else {
	            printf("B");
	        }
	    }
	    printf("\n");
	}
	return 0;
}
