/* Поиск и вывод самой длинной строки */

#include <stdio.h>
#define MAXLINE 1000
int getlines(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;
	while((len=getlines(line, MAXLINE))>0){
		if(len>max){
			max=len;
			copy(longest, line);
		}	
	}
		if(max>0){
			printf("%s", longest);
		}
	
	return 0;
}

/* Читает строку в s и возвращает длину */
int getlines(char s[], int lim)
{
	int c,i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i) {
		s[i]=c;
	}
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

/* Копирует из from в to */
void copy(char to[], char from[]){
	int i;
	i=0;
	while((to[i]=from[i])!='\0'){
		i++;
	}
}