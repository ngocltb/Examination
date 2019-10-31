#include <stdio.h>
int main () {
	float capsum, rateofinterest,  interest;
	int noyear;
///khai bao capital 
	printf ("capsum  \n");
	scanf ("f\n", &capsum);
///khai bao interest 	
	printf ("rateofinterest \n");
	scanf ("%f\n", & rateofinterest);
///in gia tri tung nam	
 printf ("Nhap so nam \n");
 scanf ("%d", &noyear);
	for (int i=1; i <= noyear;++i) {
		interest= capsum * (rateofinterest/100);
		
		capsum += interest; 
		interest = capsum; 
		printf (" year \t interest \t sum \n%d \t %f \t %f\n ",i,interest,capsum );
	    
	}
	
	return (0);

}
		

