#include <stdio.h>

main()
{	
	int sayi=5;
	char karekter='A';
	float ondalik=5.4;
	
	int *p_sayi;
	char *p_karekter;
	float *p_ondalik;
	
	printf("%d in adresi : %p\n", sayi,p_sayi);
	printf("%c nin adresi : %p\n", karekter, p_karekter);
	printf("%.1f un adresi : %p\n",ondalik, p_ondalik);

}
