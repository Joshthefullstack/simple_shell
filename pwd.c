#include "shell.h"

/**
 * func_pwd - prints working directory
 *
 * return: 0
 */
void func_pwd(char *c, int g){
	char temp[MAX_BUFF];
	char *path = getcwd(temp, MAX_BUFF);
	
	/*if path is not euals to NULL, string copy, c to temp, if g = 1, which is true, print the name of the working directory*/
	if(path != NULL){
		strcpy(c, temp);
		if(g == 1){
			printf("%s%s\n", WHITE, c);
		}
	}
	else {("Error\n")};
}
