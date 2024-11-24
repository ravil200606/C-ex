/* Замена дублирующихся пробелов и табуляций пробелом, удаление пустых строк */

#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);


int main() {
	char line[MAXLINE];
	while(getlines(line, MAXLINE)>0){
			if(line[0]!='\n'){
			printf("%s",line);
		}
	}
	
	return 0;
}

/* Читает строку в s и возвращает длину */
int getlines(char s[], int lim)
{
	int c,i,prev;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i) {
		if(c=='\t') {
			c=' ';
		}
		if(c==' ' && prev==c)
			continue;
		else
			s[i]=c;

		prev=c;
		
	}
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

