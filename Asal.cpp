#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
main() {
	
	int b,a, sayac;
	srand(time(NULL));
	for(int c=0;c<7;c++)
	{
	a=rand()%100;
	for(int i=2; i<a; i++)	
	if (a%i==0)
	sayac++;
	if(sayac==0)
	printf("Asal= %d \n", a);
	else 
	printf("Asal degil= %d \n", a);
	
	}
	
	getch();
}
