#include <stdio.h>
#include <conio.h>
main () {
    
    int toplam=0;
    for(int i=1; i<=100; i++)
      if(i%5==0 && i%10!=0)
	  
	  toplam+=i;
	printf("Toplam= %d",toplam);
  
    
    
 	 
 	 getch();
 
}
