/* Удаление комментариев */

#include <stdio.h>
#define MAXLINE 1000

int readline(void);
void checkComment(int);

char line[MAXLINE];
int inComment = 0;

int main() {
	int j=0;
	while((j=readline())>0) {
		checkComment(j);
	}
		
	return 0;
}

void checkComment(int length) {
	extern int inComment;
	extern char line[];
	for(int i=0;i<length;i++) {
		if(inComment == 0 && line[i]=='/' && line[i+1]=='*' && i+1<length) {
			inComment = 1;
			continue;
		}
		if(inComment == 1 && line[i]=='*' && line[i+1]=='/' && i+1<length) {
			inComment = 0;
			++i;
			continue;
		}
		if(inComment == 0) {
			putchar(line[i]);
		}
	}

}

int readline(void)
{
	extern char line[];
	char c;
	int i;
	for(i=0;i<MAXLINE-1 && ((c=getchar())!=EOF) && c != '\n';i++) {
		line[i] = c;
	}
		if(c=='\n') {
			line[i]=c;
			++i;
		
		}
	line[i]='\0';

	return i;
}


