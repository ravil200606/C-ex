/* Замена табуляций пробелами */

#include <stdio.h>
#define MAXLINE 1000
#define TAB_STOP 8

void printAsTab(void);
int offset;

int main() {
	char c;
	offset=0;
	while((c=getchar())!=EOF){
			if(c=='\t') {
				printAsTab();
			} else if (c=='\n' || c=='\r') {
				printf("%c", c);
				offset=0;	
			} 
			else {
			printf("%c", c);
			offset++;
		}
	}
	
	return 0;
}

void printAsTab(void) {
	int shift = offset%TAB_STOP;
	if(shift==0) {shift=TAB_STOP;}
	for(int i=0;i<=shift;i++) {
		printf(" ");
		offset++;
	}
}
