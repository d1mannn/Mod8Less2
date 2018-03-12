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
				//1.	В заданной строке заменить каждый символ строки следующим по коду символом.Букву «я» заменить пробелом.
				
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
				//2.	В заданной строке посчитать количество разных символов, входящих в эту строку
				char arr[] = "Hello world, this is me!!!";
				int length = strlen(arr);
				int sum = SumOfDifferentSymbols(arr, &length);
				if (sum == 0)
					printf("В строке не разных символов\n");
				else
					printf("Кол-во разных символов в строке - %d\n", sum);
			} break;

			case 3:
			{
				//3.	В заданной строке расположить в обратном порядке все слова.Разделителями слов считаются пробелы
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
				//4.	В заданной строке посчитать количество слов, содержащих только строчные русские буквы.Разделителями слов считаются пробелы.
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
				//5.	По заданной строке получить массив слов, входящих в эту строку.Разделителями слов считаются пробелы.
			} break;

			case 6:
			{
				//6.	Дан массив символов.Подсчитать, сколько различных символов встречается в нем.Вывести их на экран
				char arr[] = "Hello world, this is me!!!";
				int length = strlen(arr);
				int sum = SumOfDifferentSymbols(arr, &length);
				if (sum == 0)
					printf("В строке не разных символов\n");
				else
					printf("Кол-во разных символов в строке - %d\n", sum);
			} break;

			case 7:
			{
				//7.	Дан массив символов.Подсчитать самую длинную последовательность подряд идущих букв а.
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
				//8.	Дан массив символов, среди которых есть открывающиеся и закрывающиеся скобки.
				//Вывести на экран массивы символов, расположенные внутри этих скобок.
				char arr[] = "Hello (my friend)";
				int length = strlen(arr);
				PrintWhatInBrackets(arr, &length);
			} break;

			case 9:
			{	
				//9.	Дан массив символов, содержащий текст.Определить процентное отношение строчных и прописных букв к общему числу символов в нем.
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
				printf("Процент заглавных букв в строке = %d\n", (sum1 * 100) / length);
				printf("Процент строчных букв в строке = %d\n", (sum2 * 100) / length);
			} break;

			case 10:
			{
				/*10.	Дан массив символов, среди которых есть одна открывающаяся и одна закрывающаяся скобка.
					Вывести на экран все символы, расположенные внутри этих скобок*/
				char arr[] = "1 2 3 (ja ja ja) ro ro ro (ru ru ru)";
				int length = strlen(arr);
				PrintWhatInBrackets(arr, &length);
			} break;
		}
	} while (task > 0);
}