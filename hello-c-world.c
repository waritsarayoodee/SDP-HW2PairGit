#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
#include "time.h"
 
 
int main(){
	srand(time(NULL));
 
	int randomNumber1 = rand() % 10; //0-10
	int randomNumber2 = rand() % 10; //0-10
	int randomNumber3 = rand() % 10; //0-10
	int randomNumber4 = rand() % 10; //0-10
    int randomNumber5= rand() % 10; //0-10
    int randomNumber6 = rand() % 10; //0-10
	printf("Random number1 is %d%d%d%d%d%d\n", randomNumber1,randomNumber2,randomNumber3,randomNumber4,randomNumber5,randomNumber6);
	
	
	getch();
}
