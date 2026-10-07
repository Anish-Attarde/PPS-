#include <stdio.h> 

int main() {
	int r ,c ,i ,j;
	printf("Enter rows and columns: ");
	scanf("%d %d" , &r, &c);
	int SenA[r][c] , SenB[r][c] , SenC[r][c];
	
	printf("Enter Data for SenA: \n");
	for (i =0 ; i < r ; i++)
		for (j = 0; j < c ; j++)
			scanf("%d", &SenA[i][j]);
	
	printf("\nSensor A Data: \n");
		for (i =0 ; i < r ; i++){
			for (j = 0; j < c ; j++){
				printf(" %d ", SenA[i][j]);
			}
			printf("\n");
		}
	printf("Enter Data for SenB: \n");
	for (i =0 ; i < r ; i++)
		for (j = 0; j < c ; j++)
			scanf("%d", &SenB[i][j]);
			
	printf("\nSensor B Data: \n");
		for (i =0 ; i < r ; i++){
			for (j = 0; j < c ; j++){
				printf(" %d ", SenB[i][j]);
			}
			printf("\n");
		}
	
	printf("\nCombined Sensor Data, SenC:\n");

	for (i = 0; i < r; i++) {
	    for (j = 0; j < c; j++) {
		SenC[i][j] = SenA[i][j] + SenB[i][j];
		printf("%d ", SenC[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
			
			  
