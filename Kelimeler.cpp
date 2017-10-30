#include <stdio.h>
#include <conio.h>

main() {
    		int x=0;
	char kelime[20]="";
	printf("Bir kelime girin=");
	scanf("%s",kelime);
	printf("Kac kere yazilsin=");
	scanf("%d", &x);
	
	for(int i=0; i<x; i++)
	printf("%s \n",kelime);
	
	
	getch();
	
}
