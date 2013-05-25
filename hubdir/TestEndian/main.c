
#include <stdio.h>

int  main(void)
{
	unsigned short aaa=0xff00;
	unsigned char *p;
	p=(void *)&aaa;

        if (*p == (unsigned char)0xff)
		printf("This is Big Endian system.\n") ;
	else if (*p == (unsigned char)0x00)
		printf("This is Small Endian system.\n");
	else
		printf("Error happen\n");

	return 0;
}
