/* 

Is the Score Consistent

Chef is watching a football match. The current score is A:B, that is, team 1 has scored A goals and team 2 has scored B goals. Chef wonders if it is possible for the score to become C:D at a later point in the game (i.e., team 1 has scored C goals and team 2 has scored D goals). Can you help Chef by answering his question?

Input Format
The first line contains a single integer T - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers A and B - the initial number of goals team 1 and team 2 have scored respectively.
The second line of each test case contains two integers C and D - the final number of goals team 1 and team 2 must be able to score respectively.

*/



#include <stdio.h>

int main() {
	// your code goes here
	int T, A, B, C, D;
	
	scanf("%d", &T);
	
	while(T--){
	    scanf("%d %d", &A, &B);
	    scanf("%d %d", &C, &D);
	    
	    if(C >= A && D >= A) {
	        printf("POSSIBLE\n");
	    }
	    else{
	        printf("IMPOSSIBLE\n");
	    }
	}
	
	return 0;

}
