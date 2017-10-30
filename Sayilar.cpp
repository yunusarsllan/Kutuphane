#include <stdio.h>
#include <conio.h>
main() {
	int sayi=0;
	int adet=0;
	
	printf("Bir sayi girin=");
	scanf("%d", &sayi);
	
	for(int i=50; i<=250; i++)
	if(i%sayi==0)
	adet++;
	printf("%d adet sayiya kalansiz bolunur.", adet);

	
	
	
	getch();
}
