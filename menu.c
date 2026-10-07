#include <stdio.h>
#include <string.h>

int main() {
	int choice, n;
	char str1[100], str2[100], sub[50];
	while (n = 10) {
		printf("\n===== String Operations Menu =====\n");
		printf("1. Find Length (strlen)\n");
		printf("2. Copy string (strcpy)\n");
		printf("3. Concatenate strings (strcat)\n");
		printf("4. Compare strings (strcmp)\n");
		printf("5. Find character (strchr)\n");
		printf("6. Find substrings (strstr)\n");
		printf("7. Tokenize string (strtok)\n");
		printf("8. Convert to uppercase\n");
		printf("9. Convert to lowercase\n");
		printf("10. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		getchar(); //to consume newline
	
	switch (choice) {
		case 1:
			printf("Enter string: "); fgets(str1, 100, stdin);
			str1[strcspn(str1, "\n")] '/0';
			printf("Length = %lu\n", strlen(str1));
			break;
		case 2:
			printf("Enter source string: "); fgets(str1, 100, stdin);
			str1[strcspn(str1, "\n")];
			strcpy(str2, str1);
			printf("Copied string: %s\n", str2);
			break; 
		case 3:
			printf("Enter first string: "); fgets(str1, 100, stdin);
			str1[strcspn(str1, "\n")];
			printf("Enter second string: "); fgets(str2, 100, stdin);
			str2[strcspn(str2, "\n")];
			strcat(str1, str2);
			printf("Concatenated string: %s\n", str1);
			break;
		case 4:
		    printf("Enter first string: ");
		    fgets(str1, 100, stdin);
		    str1[strcspn(str1, "\n")] = '\0';

		    printf("Enter second string: ");
		    fgets(str2, 100, stdin);
		    str2[strcspn(str2, "\n")] = '\0';

		    n = strcmp(str1, str2);

		    if (n == 0)
			printf("Strings are equal.\n");
		    else if (n < 0)
			printf("First string is smaller than second string.\n");
		    else
			printf("First string is greater than second string.\n");

		    break;


		case 5:
		    printf("Enter string: ");
		    fgets(str1, 100, stdin);
		    str1[strcspn(str1, "\n")] = '\0';

		    printf("Enter character to find: ");
		    scanf("%c", &ch);
		    getchar();

		    if (strchr(str1, ch) != NULL)
			printf("Character '%c' found.\n", ch);
		    else
			printf("Character '%c' not found.\n", ch);

		    break;


		case 6:
		    printf("Enter main string: ");
		    fgets(str1, 100, stdin);
		    str1[strcspn(str1, "\n")] = '\0';

		    printf("Enter substring to find: ");
		    fgets(sub, 50, stdin);
		    sub[strcspn(sub, "\n")] = '\0';

		    if (strstr(str1, sub) != NULL)
			printf("Substring found.\n");
		    else
			printf("Substring not found.\n");

		    break;


		case 7:
		    printf("Enter string: ");
		    fgets(str1, 100, stdin);
		    str1[strcspn(str1, "\n")] = '\0';

		    printf("Tokens:\n");

		    char *token = strtok(str1, " ");

		    while (token != NULL) {
			printf("%s\n", token);
			token = strtok(NULL, " ");
		    }

		    break;


		case 8:
		    printf("Enter string: ");
		    fgets(str1, 100, stdin);
		    str1[strcspn(str1, "\n")] = '\0';

		    for (i = 0; str1[i] != '\0'; i++) {
			if (str1[i] >= 'a' && str1[i] <= 'z')
			    str1[i] = str1[i] - 32;
		    }

		    printf("Uppercase string: %s\n", str1);

		    break;


		case 9:
		    printf("Enter string: ");
		    fgets(str1, 100, stdin);
		    str1[strcspn(str1, "\n")] = '\0';

		    for (i = 0; str1[i] != '\0'; i++) {
			if (str1[i] >= 'A' && str1[i] <= 'Z')
			    str1[i] = str1[i] + 32;
		    }

		    printf("Lowercase string: %s\n", str1);

		    break;

		
		case 10: printf("Exiting...\n");
		default: printf("Invalid choice!\n");
		}
		}
		return 0;
		
		
}
		
