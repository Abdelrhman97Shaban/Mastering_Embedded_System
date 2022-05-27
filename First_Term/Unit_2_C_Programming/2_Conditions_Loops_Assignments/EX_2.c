#include <ctype.h> 
#include <stdio.h> 
int main (void) 
{
	char Alphabet; 
	char Lower_Case_Vowel;
	char Upper_Case_Vowel; 
	printf("Enter an alphabet: "); 
	scanf("%c",&Alphabet); 
	if (!isalpha(Alphabet)) 
	{
		printf("%c is not alphabet",Alphabet);
		return 0; 
	}
	
	Lower_Case_Vowel = (Alphabet == 'a' || Alphabet == 'i' || Alphabet == 'e' || Alphabet == 'o' || Alphabet == 'u'); 
	Upper_Case_Vowel = (Alphabet == 'A' || Alphabet == 'I' || Alphabet == 'E' || Alphabet == 'O' || Alphabet == 'U');

	(Lower_Case_Vowel || Upper_Case_Vowel)? printf("%c is a vowel",Alphabet) : printf("%c is a consonant",Alphabet); 
	

	return 0; 
}
