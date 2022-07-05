#include <stdio.h>
/**
 *
 *  * main - program that prints the first 50 Fibonacci
 *
 *   * numbers, starting with 1 and 2
 *
 *    *
 *
 *     * Return: Always 0 (Success)
 *
 *      */



int main(void)

{

		int i, sum = 0;



			for (i = 0; i < 1024; i++)

					{

								if ((i % 5) == 0 || (i % 3) == 0)

												sum += i;

									}

				printf("%d\n", sum);



					return (0);

}
