#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<process.h>
#include<assert.h>
int main() {
	const char* fileName = "data.txt";
	FILE* fp = fopen(fileName, "r");
	assert(fp);

	char number[] = "0";
	while (fscanf(fp, "%s", number) != EOF) {
		for (int i = 0; number[i] != '\0'; i++) {
			if (number[i] == '1') {
				printf("–");
			}
			else {
				printf("@");
			}
		}
		printf("\n");
	}

	fclose(fp);
	system("pause>0");
}