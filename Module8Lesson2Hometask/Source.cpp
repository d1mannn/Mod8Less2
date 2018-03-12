#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "Header.h"
#include <iostream>
using namespace std;
#define max 50

int main()
{
	setlocale(LC_ALL, "Rus");
	int task;
	do
	{
		task = TaskNumb();
		switch (task)
		{	
			case 1:
			{
				//1.	� �������� ������ �������� ������ ������ ������ ��������� �� ���� ��������.����� ��� �������� ��������.
				
				char * arr;
				int size = 0;
				size = SizeOfCharArr();
				arr = (char*)calloc(size, sizeof(char));
				cin.get();
				if (arr == NULL)
					return 0;
				ArrFilling(arr, &size);
				int length = (strlen(arr) - 1);
				SymbolsChange(arr, &length);
				puts(arr);
			} break;

			case 2:
			{
				//2.	� �������� ������ ��������� ���������� ������ ��������, �������� � ��� ������
				char arr[] = "Hello world, this is me!!!";
				int length = strlen(arr);
				int sum = SumOfDifferentSymbols(arr, &length);
				if (sum == 0)
					printf("� ������ �� ������ ��������\n");
				else
					printf("���-�� ������ �������� � ������ - %d\n", sum);
			} break;

			case 3:
			{
				//3.	� �������� ������ ����������� � �������� ������� ��� �����.������������� ���� ��������� �������
				char * arr;
				int size = SizeOfCharArr();
				arr = (char*)calloc(size, sizeof(char));
				cin.get();
				if (arr == NULL)
					return 0;
				ArrFilling(arr, &size);
				int length = strlen(arr);
				int count = SpaceCounter(arr, &length);
				ChangeWordsPlaces(arr, &length, &count);
			} break;

			case 4:
			{	
				//4.	� �������� ������ ��������� ���������� ����, ���������� ������ �������� ������� �����.������������� ���� ��������� �������.
				char * arr;
				int size = SizeOfCharArr();
				arr = (char*)calloc(size, sizeof(char));
				cin.get();
				if (arr == NULL)
					return 0;
				ArrFilling(arr, &size);
				int length = strlen(arr);
				int count = SpaceCounter(arr, &length);
				CapitalLetterCounter(arr, &length, &count);
			} break;

			case 5:
			{
				//5.	�� �������� ������ �������� ������ ����, �������� � ��� ������.������������� ���� ��������� �������.
			} break;

			case 6:
			{
				//6.	��� ������ ��������.����������, ������� ��������� �������� ����������� � ���.������� �� �� �����
				char arr[] = "Hello world, this is me!!!";
				int length = strlen(arr);
				int sum = SumOfDifferentSymbols(arr, &length);
				if (sum == 0)
					printf("� ������ �� ������ ��������\n");
				else
					printf("���-�� ������ �������� � ������ - %d\n", sum);
			} break;

			case 7:
			{
				//7.	��� ������ ��������.���������� ����� ������� ������������������ ������ ������ ���� �.
				char * arr;
				int arr2[max];
				int size = SizeOfCharArr();
				arr = (char*)calloc(size, sizeof(char));
				cin.get();
				if (arr == NULL)
					return 0;
				ArrFilling(arr, &size);
				int length = strlen(arr);
				int length2 = SumofAletter(arr, arr2, &length);;
				Max(arr2, &length2);

			} break;

			case 8:
			{
				//8.	��� ������ ��������, ����� ������� ���� ������������� � ������������� ������.
				//������� �� ����� ������� ��������, ������������� ������ ���� ������.
				char arr[] = "Hello (my friend)";
				int length = strlen(arr);
				PrintWhatInBrackets(arr, &length);
			} break;

			case 9:
			{	
				//9.	��� ������ ��������, ���������� �����.���������� ���������� ��������� �������� � ��������� ���� � ������ ����� �������� � ���.
				char * arr;
				int size = SizeOfCharArr();
				arr = (char*)calloc(size, sizeof(char));
				cin.get();
				if (arr == NULL)
					return 0;
				ArrFilling(arr, &size);
				int length = strlen(arr) - 2;
				int sum1 = CapitalLetterCounter(arr, &length);
				int sum2 = SmalLetterCounter(arr, &length);
				printf("������� ��������� ���� � ������ = %d\n", (sum1 * 100) / length);
				printf("������� �������� ���� � ������ = %d\n", (sum2 * 100) / length);
			} break;

			case 10:
			{
				/*10.	��� ������ ��������, ����� ������� ���� ���� ������������� � ���� ������������� ������.
					������� �� ����� ��� �������, ������������� ������ ���� ������*/
				char arr[] = "1 2 3 (ja ja ja) ro ro ro (ru ru ru)";
				int length = strlen(arr);
				PrintWhatInBrackets(arr, &length);
			} break;
		}
	} while (task > 0);
}