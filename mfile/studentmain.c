#include <stdio.h>
#include <string.h>
struct Student {
	char firstName[50];
	char lastName[50];
	int age;
	int stid;
};
void printStudent(struct Student* student)
{
	printf("The name is %s %s.\n", student -> firstName, student -> lastName);
	printf("The age is %d\n", student -> age);
	printf("The student ID is %d\n", student -> stid);
}
int main()
{
	char input[50];
	int answer;
	printf("How many students?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &answer);
	struct Student studentA[answer];
	for (int i = 0; i<answer; i++)
	{
	printf("What is your first name?\n");
	fgets(input, 256,stdin);
	sscanf(input, "%s", &studentA[i].firstName);
	printf("What is your last name?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%s", &studentA[i].lastName);
	printf("What is your age?\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &studentA[i].age);
	printf("What is your ID\n");
	fgets(input, 256, stdin);
	sscanf(input, "%d", &studentA[i].stid);
	}
	for (int i = 0; i<answer; i++)
	{
	printStudent(&studentA[i]);
	}
}

