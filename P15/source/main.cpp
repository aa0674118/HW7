﻿#include<stdio.h>
#include <stdlib.h>
int main()
{
	FILE *f1, *f2;
	char ch;
	f1 = fopen("‪D:\C_code\HW7\P15\source\wlecome.txt","r");
	f2 = fopen("‪D:\C_code\HW7\P15\source\output.txt","r");
	if ((f1 != NULL) && (f2 != NULL))
	{
		while ((ch = getc(f1)) != EOF)
			putc(ch, f2);
		fclose(f1);
		fclose(f2);
		printf("檔案拷貝完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}