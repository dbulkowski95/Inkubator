#include <stdio.h>
#include <string.h>
#include <ctype.h>
void Parse_cmdline(int argc, const char *argv[]){
		for (size_t i = 1; i < argc; ++i) {
			for (size_t j = 0;  j < strlen(argv[i]); ++ j) {
				if(isupper(argv[i][j])){
					putchar('_');
					putchar(tolower(argv[i][j]));
				}
				else{
					putchar(tolower(argv[i][j]));
				}
			}
			putchar('\n');
		}
}
int main (int argc, const char *argv[]){
	Parse_cmdline(argc,argv);
  return 0;
}
