/*Ash is trying to get visa to Chefland. For the visa to be approved, he needs to satisfy the following three criteria:

Solve at least x_1x 
1
​
  problems on Codechef.
Have at least y_1y 
1
​
  current rating on Codechef.
Make his last submission at most z_1z 
1
​
  months ago.
You are given the number of problems solved by Chef (x_2x 
2
​
 ), his current rating (y_2y 
2
​
 ) and the information that he made his last submission z_2z 
2
​
  months ago. Determine whether he will get the visa.*/

  #include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x1,x2,y1,y2,z1,z2;
	    scanf("%d %d %d %d %d %d",&x1,&x2,&y1,&y2,&z1,&z2);
	    if(x1<=x2 && y1<=y2 && z1>=z2) printf("YES\n");
	    else printf("NO\n");
	}
	return 0;
}
