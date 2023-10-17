/**
 * _strcpy - Copies a string from src to dest, including the null terminator.
 * @dest: The destination buffer to copy to.
 * @src: The source string to copy from.
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}

	dest[i] = '\0';

	return (dest);
}
