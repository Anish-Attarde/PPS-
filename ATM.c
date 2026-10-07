#include <stdio.h>

//CREATE A SIMPLE ATM MENU:
//1)CHECK BALANCE 2)DEPOSIT 3)WITHDRAW 4)EXIT

int main() {
	int choice, n;
	int balance = 1000;
	
	while (n = 4){
		printf("Check Balance: \n");
		printf("Deposit: \n");
		printf("Withdraw: \n");
		printf("Exit \n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
	switch (choice) {
		case 1:
			printf("Your balance: %d\n", balance);
		}
		}
		return 0;
		
}
	
