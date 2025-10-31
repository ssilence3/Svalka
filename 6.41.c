#include <stdio.h>

int is_divisible()
{
	char c; int num = 0, flag = 1;
	while ((c = getchar()) != EOF && c != '\n'){
		if (c >= '0' && c <= '9') // Проверка, является ли входящий символ цифрой десятичного числа 
			num = num*10 + c - '0'; // Если да, переводим её в тип int
		else {
			flag = 0; // Если нет, фиксируем это и заканчиваем цикл
			break;
		}
	}
	if (flag) return !(num % 9); // Проверка на наличие неподходящего символа
	else return -1;
}

int main()
{
	int result = is_divisible();
	if (result == -1) printf("Wrong text"); //Выводим результат
	else if (result) printf("True \n");
	else printf("False \n");
	return 0;
}
