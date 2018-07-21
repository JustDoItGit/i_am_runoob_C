#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char name[100];
	char *description;

	strcpy(name, "Zara Ali");

	/* 动态分配内存 */
	/*description = malloc(200 * sizeof(char));*/
	description = calloc(200, sizeof(char));
	if (description == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory\n");
	}
	else
	{
		strcpy(description, "Zara ali a DPS tudent in class 10th");
	}
	printf("Name = %s\n", name);
	printf("Description: %s\n", description);
	return 0;
}