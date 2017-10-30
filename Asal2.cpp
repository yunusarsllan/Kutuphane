#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1,sayi2,asalmi=0;
	
	printf("1. sayýyý giriniz : ");
	scanf("%d",&sayi1);
	printf("2. sayýyý giriniz : ");
	scanf("%d",&sayi2);
	
	for(sayi1;sayi1<=sayi2;sayi1++)
	{
		for(int i=2;i<sayi1;i++)
		{
			if(sayi1%i=0=)
			{
				asalmi++;
			}
		}
		if(asalmi==0)
		{
			printf("Sayý %d = asaldýr\n",sayi1);
			
		}
		else
		{
			asalmi=0;
		}
	}
	
	getch();
}
