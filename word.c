#include <stdio.h>
#include <string.h>

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
	strcpy(test_word.value, source_string);

	printf("%s\n", test_word.value);	
	
	return 0;
}


