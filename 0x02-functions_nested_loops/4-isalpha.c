#include "main.h"

/**
 * _isalpha -> checks for alphabetic character.
 * @c: character to be checked on.
 * Return: return 1 or 0 depending on the condition.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
