#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference
 * @a: The first number.
 * @b: The second number.
 *
 * Return: the diffrence.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product
 * @a: The first number.
 * @b: The second number.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the two numbers.
 * @a: number.
 * @b: The second
 *
 * Return: The remainder of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
