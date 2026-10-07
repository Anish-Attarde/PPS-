#include <stdio.h>
#include <math.h>
//PRINT THE CUBES OF THE NUMBERS FROM 1 TO 10

int main() {
	int n = 10;
	
	int result , i;
	
	for (i= 1; i<=n; i++){
		result=pow(i , 3);
		printf("%d\n" , result);
	}
	return 0;
}
