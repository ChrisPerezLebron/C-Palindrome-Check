#include <stdio.h> 
#include <ctype.h>

int main( ){

	

	printf("Enter a message: "); 
	
	char string[80]; 
	
	int count = 0; 
	char currentChar = tolower(getchar()); 
	char *stringPointer = &string[0];
	while( count < 80 &&  currentChar != '\n') {
		if(!(currentChar >= 33 && currentChar <= 64)) { //if currentChar is not a symbol
			*(stringPointer + count) = currentChar; 
			count++; 
		} 
		currentChar = tolower(getchar()); 
	}
	
	//last stored character will be count--
	count--;
	
	//store reversed version
	char reversedString[80];  
	char *reversedStringPointer = &reversedString[0]; 
	for(int index = 0 ; index <= count; index++) {
		 *(reversedStringPointer + index) = *(stringPointer + (count - index)); 
		 
		// printf("%c", *(reversedStringPointer + index));
	} 
	
	
	
	int flag = 1; 
	int index = 0;
	while(flag == 1 && index <= count) {
		if( *(reversedStringPointer + index) != *(stringPointer + index))
			flag = 0;
		index++; 
	}  
	
	if(flag == 0) 
		printf("not a palindrome"); 
	else
		printf("Palindrome"); 
		

}
