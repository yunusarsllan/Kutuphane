
#include <stdio.h>
#include <conio.h>
main() {
	
	int adet=9;
	int bosluk=1;
	for(int i=0; i<5; i++)
	
	{
		for(int a=0; a<bosluk; a++)
		printf(" ");
		
		for(int j=0; j<adet; j++)
		printf("*");
		printf("\n");
		adet-=2;
		bosluk+=1;
	}
	int adet1=1;
			int bosluk1=5;
	for(int i=0; i<5; i++)
		{
			
	
		for(int a=0; a<bosluk1; a++)
		printf(" ");
		
		for(int j=0; j<adet1; j++)
		printf("*");
		printf("\n");
		adet1+=2;
		bosluk1-=1;
	}   
	
	
	
	
	
	
	
	getch();
}
