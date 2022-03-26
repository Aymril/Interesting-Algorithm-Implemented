/* 
compareStrings function takes two C-style strings (character array) as parametes. Two integers can be stored in these array, and it's assumed to be. If there is 
leading zeros, they'll be eliminated/deleted. Function return:

1, when num1 > num2
0, when num1 = num2
-1, when num1 < num2. (Of course, these comparisons done considering integer values stored in strings.)
*/

#include <string.h>

int compareStrings(const char* num1, const char* num2) {
	const char* p = num1;
	const char* q = num2;
	int i;
	for (i = 0; i < strlen(p) && p[i] == '0'; i++);
	p = (p + i);

	for (i = 0; i < strlen(q) && q[i] == '0'; i++);
	q = (q + i);

	if (!strcmp(p, q))
		return 0;

	if (strlen(p) == strlen(q)) {
		while (*p == *q)
			++p, ++q;
		return (*p - *q) ? 1 : -1;
	}

	return (strlen(p) > strlen(q)) ? 1 : -1;
}
