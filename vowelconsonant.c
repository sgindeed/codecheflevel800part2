/*Write a program to take a character (C)(C) as input and check whether the given character is a vowel or a consonant.

NOTE:-NOTE:− Vowels are 'A', 'E', 'I', 'O', 'U'. Rest all alphabets are called consonants.*/

#include <stdio.h>

int main(void) {
	// your code goes here
	
	
	    char c;
	    scanf("%c",&c);
	    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
	        printf("Vowel\n");
	    }
	    else{
	        printf("Consonant\n");
	    }

	return 0;
}
