#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string haystack
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Return: return 0
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *sr1, *sr2;

	while (*haystack != '\0')
	{
		sr1 = haystack; /*values*/
		sr2 = needle;

		/*Star WHILE*/
		while (*haystack != '\0' && *sr2 != '\0' && *haystack == *sr2)
		{
			haystack++;
			sr2++;
		}
		if (*sr2 == '\0')
			return (sr1);
		haystack = sr1 + 1;
	}
	return (0);
}
