#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "Header.h"
#include <iostream>
using namespace std;
#define max 50

int TaskNumb()
{
	setlocale(LC_ALL, "Rus");
	int task;
	printf("Введите номер задания - ");
	scanf_s("%d", &task);
	return task;
}

int SizeOfCharArr()
{	
	setlocale(LC_ALL, "Rus");
	int size;
	printf("Введите размерность массива - ");
	scanf_s("%d", &size);
	return size;
}

void ArrFilling(char *arr, int *size)
{
	setlocale(LC_ALL, "Rus");
	printf("Введите текст - ");
	fgets(arr, *size, stdin);
}

void SymbolsChange(char *arr, int *length)
{	

	for (int i = 0; i < *length; i++)
	{
		if (arr[i] == 'я' || arr[i] == 'Я')
			arr[i] = ' ';
		else
		{
			int code = (int)arr[i];
			arr[i] = code + 1;
		}
	}
}

int SumOfDifferentSymbols(char *arr, int *length)
{	
	int sum = 0;
	for (int i = 0; i < *length; i++)
	{
		for (int j = 0; j < *length; j++)
		{
			if (i != j)
				if (arr[i] != arr[j])
					sum++;
		}
	}
	return sum;
}

int SpaceCounter(char * string, int *length)
{
	int count = 0;
	for (int i = 0; i < *length; i++)
	{
		if (string[i] == ' ')
			count++;
	}
	return count;
}

int ChangeWordsPlaces(char *string, int *length, int *count)
{
	char arr[max];
	/*strcpy(arr, string);
	puts(arr);
	system("pause");*/
	int a = 0, b = 0;
	for (int i = 0; i < *length - 2; i++)
	{
		if (string[i] == ' ')
			a++;
		if (a >= *count)
		{
			arr[b] = string[i + 1];
			b++;
		}
	}
	/*puts(arr);
	system("pause");*/
	a = 0;
	for (int i = 0; i < *length - 2; i++)
	{
		if (string[i] == ' ')
		{
			for (int j = i; j < *length - 2; j++)
			{
				arr[b] = string[j];
				b++;
			}
		}
	}
	/*puts(arr);
	system("pause");*/
	int c = 0;
	for (int i = 0; i < *length - 2; i++)
	{
		if (arr[i] == ' ')
		{
			a++;
			if (a == *count)
			{
				for (int j = i; j < *length - 2; j++)
				{
					if (c == 0)
						arr[j] = ' ';
					arr[j + 1] = string[c];
					c++;
				}
			}
		}
	}

	// 
	/*for (int i = 0; i < *length - 1; i++)
	{
	cout << arr[i];
	}
	cout << endl;*/

	arr[*length - 1] = '\0';
	puts(arr);
	/*for (int i = 0; i < *length; i++)
	{
	cout << arr[i];
	}*/
	return *arr;
}

void CapitalLetterCounter(char *arr, int *length, int * count)
{
	int word = 1, b = 0, sum = 0, code = 0;
	for (int i = 0; i < *length-2; i++)
	{	
		sum = 0;
		if (arr[i] == ' ')
		{
			for (int j = i - b; j < b; j++)
			{
				code = (int)arr[j];
				if (code >= 128 && code <= 159)
					sum++;
				else if (code >= 65 && code <= 90)
					sum++;
			}
			printf("Кол-во заглавных букв в %d-м слове - %d\n", word, sum);
			word++;
			b = 0;
		}
		b++;
	}
}

int SumofAletter(char *arr,int *LetterA, int *length)
{	
	int count = 0, sum = 0, j = 0, size = 0;
	for (int i = 0; i < *length - 1; i++)
	{
		if (arr[i] == 'a')
		{	
			j = i;
			while (arr[j] == 'a')
			{
				sum++;
				j++;
				i = j;
			}
			LetterA[count] = sum;
			sum = 0;
			size++;
			count++;
		}
	}
	return size;
}

void PrintWhatInBrackets(char *arr, int *length)
{	
	int a = 0;
	for (int i = 0; i < *length - 1; i++)
	{
		if (arr[i] == '(')
		{	
			a = i + 1;
			while (arr[a] != ')')
			{
				printf("%c", arr[a]);
				a++;
			}
			printf("\n");
		}
	}
}

int CapitalLetterCounter(char * arr, int * length)
{
	int sum = 0, code = 0;
	for (int i = 0; i < *length; i++)
	{
		code = (int)arr[i];
		if (arr[i] >= 65 && arr[i] <= 90)
			sum++;
	}
	return sum;
}

int SmalLetterCounter(char * arr, int *length)
{
	int sum = 0, code = 0;
	for (int i = 0; i < *length; i++)
	{
		code = (int)arr[i];
		if (arr[i] >= 97 && arr[i] <= 122)
			sum++;
	}
	return sum;
}

void Max(int * arr, int *length)
{
	int MAX = arr[0];
	for (int i = 0; i < *length; i++)
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
	}
	printf("Наибольшая продолжительность появления буквы а - %d\n", MAX);
}