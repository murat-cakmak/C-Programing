# C-Programing

#include <stdio.h>

main()
{
	int sayi = 10;
	int *ptr = &sayi;
	int sayi2 = *ptr;
	ptr = &sayi2;
	
	printf("%d\n", sayi);
	printf("%p\n", ptr);
	printf("%d",sayi2);
	
	int *p1, *p2; // Çoklı pointer oluşturma..

}
