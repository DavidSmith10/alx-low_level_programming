/**
 * _strlen_recursion - gets length of a string
 * @s: string whose length is to be calculated
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
		return (*s ? (1 + _strlen_recursion(++s)) : 0);
}
