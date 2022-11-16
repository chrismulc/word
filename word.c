#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _Word{

	char *value;
	int frequency;
}Word;

/* test comment */
/* another comment */
/* yet another commit */

int main(){
	Word test_word;
	char source_string[20] = "Chris";
	test_word.value = malloc(sizeof(source_string) + 1);

	strcpy(test_word.value, source_string);

	printf("%s\n", test_word.value);	
	
	return 0;
}


