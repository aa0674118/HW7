#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ENTER 13
#define MAX 80
int main()
{
	FILE *f;
	char str[MAX], ch;
	int i = 0;
	f = fopen("D:\C_code\HW7\P16\source\output.txt","a");
	printf("�п�J�r��A��ENTER�䵲����J:\n");
	while ((ch = getche()) != ENTER&& i<MAX)
		str[i++] = ch;
	putc('\n',f);
	fwrite(str,sizeof(char),i,f);
	fclose(f);
	printf("\n�ɮת��[����\n");
	system("pause");
	return 0;
}