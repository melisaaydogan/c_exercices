#include <stdio.h>

int main()
{
	printf("sizeof(char)=%zu\n", sizeof(char));            //1 byte
	printf("sizeof(_Bool)=%zu\n", sizeof(_Bool));          //1 byte
	printf("sizeof(short)=%zu\n", sizeof(short));          //2 byte
	printf("sizeof(int)=%zu\n", sizeof(int));              //4 byte
	printf("sizeof(long)=%zu\n", sizeof(long));            //4 byte
	printf("sizeof(long long )=%zu\n", sizeof(long long)); //8 byte
	printf("sizeof(float)=%zu\n", sizeof(float));          //4 byte
	printf("sizeof(double)=%zu\n", sizeof(double));        //8 byte
	printf("sizeof(long double )=%zu\n", sizeof(long double));//8 byte

    return 0;
}