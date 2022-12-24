/*The weather report of Chefland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.

Given 77 integers A_1, A_2, A_3, A_4, A_5, A_6, A_7A 
1
​
 ,A 
2
​
 ,A 
3
​
 ,A 
4
​
 ,A 
5
​
 ,A 
6
​
 ,A 
7
​
  where A_i = 1A 
i
​
 =1 denotes that the i^{th}i 
th
  day of week in Chefland is a sunny day, A_i = 0A 
i
​
 =0 denotes that the i^{th}i 
th
  day in Chefland is a rainy day. Determine if the weather report of Chefland is Good or not.

Input Format
First line will contain TT, number of testcases. Then the testcases follow.
Each testcase contains of a single line of input, 77 space separated integers A_1, A_2, A_3, A_4, A_5, A_6, A_7A 
1
​
 ,A 
2
​
 ,A 
3
​
 ,A 
4
​
 ,A 
5
​
 ,A 
6
​
 ,A 
7
​
 .*/

 #include <stdio.h>
int main(void) {
    int t,s;
    int a=0;
    scanf("%d",&t);
    while(t--)
    {
        s=0;
        for(int i=1;i<=7;i++)
    {
        scanf("%d",&a);
        s+=a;
    }
        if(s>3)
        printf("YES\n");
        else printf("NO\n");
    }
    
	// your code goes here
	return 0;
}
