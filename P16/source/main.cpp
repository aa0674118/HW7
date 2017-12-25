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
	printf("請輸入字串，按ENTER鍵結束輸入:\n");
	while ((ch = getche()) != ENTER&& i<MAX)
		str[i++] = ch;
	putc('\n',f);
	fwrite(str,sizeof(char),i,f);
	fclose(f);
	printf("\n檔案附加完成\n");
	system("pause");
	return 0;
}