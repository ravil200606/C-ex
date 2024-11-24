#include<stdio.h>
int main() {
	int c, nl=0, tab = 0, space = 0;
	while((c=getchar())!=EOF){
		if(c=='\n') {
			++nl;
		}
		if(c=='\t'){
			++tab;
		}
		if(c==' '){
			++space;
		}
	}
	printf("New line %d, tabs %d, spaces %d\n", nl,tab,space);
	return 0;
}