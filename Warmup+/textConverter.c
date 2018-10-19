#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
void Parse_file(char parseChar){
	if(isupper(parseChar)){
		putchar('_');
		putchar(tolower(parseChar));
	}
	else{
		putchar(parseChar);
	}
}
void getAndSet(char charFromFile){
	if(charFromFile == '\n')	{
		putchar('\n');
	}
	else Parse_file(charFromFile);
}
int main(){

	char c = getchar();
	while (c != EOF) {
		getAndSet(c);
		c = getchar();
	}
}
