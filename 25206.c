#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	float total_credit = 0.0;
	char subject[50];
	float credit = 0.0;
	char grade[3];
	int count = 1;
	float total = 0.0;
	while (count <= 20) {
		scanf("%s %f %s", subject, &credit, &grade);
		if (strcmp(grade, "A+") == 0) total += credit * 4.5;
		else if (strcmp(grade, "A0") == 0) total += credit * 4.0;
		else if (strcmp(grade, "B+") == 0) total += credit * 3.5;
		else if (strcmp(grade, "B0") == 0) total += credit * 3.0;
		else if (strcmp(grade, "C+") == 0) total += credit * 2.5;
		else if (strcmp(grade, "C0") == 0) total += credit * 2.0;
		else if (strcmp(grade, "D+") == 0) total += credit * 1.5;
		else if (strcmp(grade, "D0") == 0) total += credit * 1.0;
		else if (strcmp(grade, "F") == 0) total += credit * 0.0;
		if (strcmp(grade, "P") != 0) total_credit += credit;
		count++;
	}
	float average = total / total_credit;
	printf("%.6lf", average);
}
