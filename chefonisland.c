/*Suppose Chef is stuck on an island and currently he has xx units of food supply and yy units of water supply in total that he could collect from the island. He needs x_rx 
r
​
  units of food supply and y_ry 
r
​
  units of water supply per day at the minimal to have sufficient energy to build a boat from the woods and also to live for another day. Assuming it takes exactly DD days to build the boat and reach the shore, tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?*/

  #include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c,d,x;
	scanf("%d",&t);
	while(t--) {
	    scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
	    float g,h;
	    g=a/(float)c;
	    h=b/(float)d;
	    if(g>h) {
	      if(h>=x) 
	        printf("YES\n");
	      else 
	        printf("NO\n");
	    }
	    else {
	        if(g>=x) 
	          printf("YES\n");
	        else 
	          printf("NO\n");
	    }
	}
	return 0;
}
