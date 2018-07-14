#include <stdio.h>

int main()
{
	FILE *fp = NULL;
	int ch = 33;
	fp = fopen("test.txt", "w+");
	fprintf(fp, "This is testing for fprintf...\n");
	fputs("This is testing for fputs...\n", fp);
	fputc(ch,fp);
	fprintf(fp, "\n");
	fputc('c',fp);
	fputs("\n", fp);
	fclose(fp);
	return 0;
}
