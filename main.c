#include <stdio.h>
#include <stdlib.h>
//Creat by Tuan Linh 00569, date: 2/9/2017.
int main(){
	int a;
	int b;
	int c;
	while ("true"){
    printf("   MENU CONSOLE \n");
    printf("--------------------------- \n");
    printf("1.Plus two number. \n");
    printf("2.Minus two number. \n");
    printf("3.Multiply two number. \n");
    printf("4.Devision two number. \n");
    printf("5.Exit. \n");
	printf("Please choice the calculation: ");
    scanf("%i", &c);
	switch(c){
		case 1:	
			printf("Please enter number A = ");
    		scanf("%i", &a);
    		printf("Please enter number B = ");
    		scanf("%i", &b);
			printf("The result: %d + %d = %d \n", a, b, a + b);
   			printf("Thank you so much. \n");
   			printf("******************** \n");
   			break;
		case 2:
			printf("Please enter number A = ");
    		scanf("%i", &a);
    		printf("Please enter number B = ");
    		scanf("%i", &b);
   			printf("The result: %d - %d = %d \n", a, b, a - b);
   			printf("Thank you so much. \n");
   			printf("******************** \n");
   			break;
		case 3:
			printf("Please enter number A = ");
    		scanf("%i", &a);
    		printf("Please enter number B = ");
    		scanf("%i", &b);
   			printf("The result: %d * %d = %d \n", a, b, a * b);
   			printf("Thank you so much. \n");
   			printf("******************** \n");
   			break;
   		case 4:
   			printf("Please enter number A = ");
    		scanf("%i", &a);
    		printf("Please enter number B = ");
    		scanf("%i", &b);
   			printf("The result: %d / %d = %d \n", a, b, a / b);
   			printf("Thank you so much. \n");
   			printf("******************** \n");
   			break;				
		}if(c == 5){
			printf("Goodbye, see you soon.");
			break;
		}
	}return 0;
}
