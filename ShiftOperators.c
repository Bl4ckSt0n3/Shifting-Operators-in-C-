#include<stdio.h>
int main()
{
	int i = 6;
	printf("i<<1 => %d\n",i<<1);
	printf("i>>1 => %d\n",i>>1);


	unsigned int u = 7;
	printf("u<<1 => %d\n",u<<1);
	printf("u>>1 => %d\n",u>>1);

	unsigned char c=5;
	printf("c<<1 => %d\n",c<<1);
	printf("c>>1 => %d\n",c>>1);
	return 0;
}
