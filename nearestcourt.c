/*Chef and Chefina are at positions XX and YY on a number line.

They both love badminton.

It is known that badminton courts are located at every integer point.

They want to find a court such that the maximum distance travelled by either of them is minimized.

Formally, suppose they choose the badminton court at position ZZ. You need to find the minimum value of \max(|X-Z|, |Y-Z|)max(∣X−Z∣,∣Y−Z∣) across all possible choices of ZZ. Here, |X|∣X∣ denotes absolute value of XX.

Report this minimum value.*/

#include <stdio.h>
#include<string.h>

int main() {
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int x,y;
		scanf("%d %d", &x,&y);
		int n = (x+y)/2;
		if (x>y) {
			if (x-n > n-y) printf("%d\n", x-n);
			else printf("%d\n", n-y);
		}
		else {
			if (y-n > n-x) printf("%d\n", y-n);
			else printf("%d\n", n-x);
		}

	}
	
	return 0;
}