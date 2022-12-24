/*Some programming contest problems are really tricky: not only do they require a different output format from what you might have expected, but also the sample output does not show the difference. For an example, let us look at permutations.
A permutation of the integers 1 to n is an ordering of these integers. So the natural way to represent a permutation is to list the integers in this order. With n = 5, a permutation might look like 2, 3, 4, 5, 1.
However, there is another possibility of representing a permutation: You create a list of numbers where the i-th number is the position of the integer i in the permutation. Let us call this second possibility an inverse permutation. The inverse permutation for the sequence above is 5, 1, 2, 3, 4.
An ambiguous permutation is a permutation which cannot be distinguished from its inverse permutation. The permutation 1, 4, 3, 2 for example is ambiguous, because its inverse permutation is the same. To get rid of such annoying sample test cases, you have to write a program which detects if a given permutation is ambiguous or not.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	while(1){
	  int n;
	  scanf("%d",&n);
	  if(n==0)
	     return 0;
	  int i,a[n+1];
	  for(i=1;i<=n;i++)
	    scanf("%d",&a[i]);
	  for(i=1;i<=n;i++){
	      if(a[a[i]]!=i)
	         break;
	  }
	  if(i==n+1)
	  printf("ambiguous\n");
	  else
	  printf("not ambiguous\n");
	}
	return 0;
}
