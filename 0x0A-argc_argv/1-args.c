#include <stdio.h>
/**
 * main - prints arg
 * @argc: no of args passed
 * @argv: array sring arg
 *
 * Return:0
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d", argc - 1);
return (0);
}
