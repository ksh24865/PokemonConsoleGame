#define _CRT_SECURE_NO_WARNINGS   
#include <stdio.h>     
#include <stdlib.h>

void Img(char *name);

int main(void)

{
	Img("pi.txt");
}

void Img(char* name)
{
	{
		char ch, * name_tmp = malloc(sizeof(char) * 10);
		name_tmp = name;
		FILE* fp = fopen(name, "rt");
		if (fp == NULL) {
			printf("���� ���� ���� !\n");
		}
		while (1) {
			ch = fgetc(fp);
			if (ch == EOF)
				break;
			putchar(ch);
		}
		fclose(fp);
	}
}
