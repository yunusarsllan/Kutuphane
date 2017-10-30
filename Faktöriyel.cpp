#include <stdio.h>
#include <conio.h>
main() {
	int sayi=0;
	int sonuc=1;
	
	printf("Sayi Girin:");
	scanf("%d", &sayi);
	for(int i=sayi; i>=1; i--)
	sonuc= sonuc * i;
	printf("%d ! = %d",sayi,sonuc); 
	
	
	
	
	
	getch();
}
