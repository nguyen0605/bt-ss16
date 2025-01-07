#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char *input, char *reverse){
	int length=strlen(input);
	for(int i=0;i<length;i++){
		*(reverse+i)=*(input+length-i-1);
	}
	*(reverse + length)='\0';
}
int main(){
	char *inputString, *reverseString;
	int length; 
	printf("Nhap vao mot chuoi bat ki: ");
	inputString=(char*)malloc(100*sizeof(char));
	gets(inputString);
	length=strlen(inputString);
	reverseString=(char*)malloc((length+1)*sizeof(char));
	reverse(inputString,reverseString);
	printf("Chuoi truoc khi dao nguoc: %s\n",inputString);
	printf("Chuoi sau khi dao nguoc: %s",reverseString);
	free(inputString);
	free(reverseString);
	return 0;
}
