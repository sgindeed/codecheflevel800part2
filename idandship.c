/*Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate*/

#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d\n",&t);
	 
	
	while(t--){
	    char c;
	    scanf("%c\n",&c);
	    
	    if(c=='b'||c=='B'){
	        printf("BattleShip\n");
	    }
	    else if(c=='c'||c=='C'){
	        printf("Cruiser\n");
	    }
	    else if(c=='d'||c=='D'){
	        printf("Destroyer\n");
	    }
	    else if(c=='f'||c=='F'){
	        printf("Frigate\n");
	    }
	    
	}
	return 0;
}
