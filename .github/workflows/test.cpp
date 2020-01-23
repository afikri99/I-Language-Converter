#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	char text[100];
	int panjang;
	printf("Bahasa I Converter: ");
	gets(text);
	panjang = strlen(text);
	for(int i = 0; i <panjang; i++){
		if(text[i] == 'a' || text[i] == 'e' || text[i] == 'o' || text[i] == 'u') text[i] = 'i';
		if(text[i] == 'A' || text[i] == 'E' || text[i] == 'O' || text[i] == 'U') text[i] = 'I';
	}
	printf("\n");
	for(int i = 0; i <panjang; i++){
		printf("%c", text[i]);
	}
	return 0;
}
