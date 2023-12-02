//exam
#if 0
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<process.h>
#include<assert.h>
int main() {
	const char* fileName = "data.txt";
	FILE* fp = fopen(fileName, "r");
	assert(fp);

	char c[128];
	while (fscanf(fp, "%s", c) != EOF) {
		for (int i = 0; c[i] != '\0'; i++) {
			if (c[i] == '1') {
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
#endif
//C++ ver
#if 1
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<process.h>
#include<assert.h>
int main() {
	std::ifstream fin("data.txt");

	std::string c;
	fin >> c;
	while (!fin.eof()) {
		for (int i = 0; c[i] != '\0'; i++) {
			if (c[i] == '1') {
				std::cout << "–";
			}
			else {
				std::cout << "@";
			}
		}
		std::cout << std::endl;
		fin >> c;
	}
	for (int i = 0; c[i] != '\0'; i++) {
		if (c[i] == '1') {
			std::cout << "–";
		}
		else {
			std::cout << "@";
		}
	}
	std::cout << std::endl;
	system("pause>0");
}
#endif