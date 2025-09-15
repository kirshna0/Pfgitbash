#include <stdio.h>

int main (){
	char student,interview_result;
	printf("Are you a MS student (Enter Y for yes and N for no)\n");
	scanf("%c", &student);
	if (student == 'Y'){
		printf("Have you passed your interview? (Enter P for pass and F for fail)\n");
		scanf(" %c", &interview_result);
		if (interview_result == 'P'){
			printf("You are hired");
		} else {
			printf("You are not hired");
		}
	} else {
		printf("You are not hired");
	}
	
	return 0;
}
