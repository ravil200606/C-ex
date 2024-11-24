/* Замена дублирующихся пробелов и табуляций пробелом, удаление пустых строк */

#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
void reverse(char line[], int length);


int main() {
	int length;
	char line[MAXLINE];
	while((length=getlines(line, MAXLINE))>0){
			reverse(line, length);
			
	}
	return 0;
}

/* Читает строку в s и возвращает длину */
int getlines(char s[], int lim)
{
	int c,i=0;
	while(((c=getchar())!=EOF) && c!='\n') {
		s[i]=c;
		i++;
	}
	if(c=='\n'){
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

/* Реверсирует полученну строку */
void reverse(char line[], int length) {
	
	char reversed[length+1];
	for(int j=0;j<length;j++){
		
		reversed[j]=line[length-j-1];
	
	}
	reversed[length]='\0';
	printf("String reversed: %s\n ",reversed);
}