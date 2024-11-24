#include<stdio.h>

int main() {
	int c;
	int characters[127];
	
	for(int i=0;i<127;i++){
		characters[i]=0;
		
	}
	
	
	while((c=getchar())!=EOF){
		characters[c]++;
	}
	

	for(int i = 1;i<127;i++) {
		if(characters[i]>0){
			printf("Символ: %c\tКоличество: %d\t", i, characters[i]);
		for(int j=0;j<characters[i];j++){
			printf("#");

		}
		printf("\n");
	}
		}
	return 0;
} 