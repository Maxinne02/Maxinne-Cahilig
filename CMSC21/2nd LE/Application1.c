#include<stdio.h>
#include<ctype.h> /* toupper, isalpha */
#include<stdbool.h>

//functions
void scan_word(int occurences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);


int i, same = 1, occurences[26] = {0}, occurences1[26], occurences2[26];
char c;

int main(){
	//first word count
	i = 1;	
	printf("Enter first word: ");
	scan_word(occurences);

	//second word count
	i = 2;	
	printf("Enter second word: ");
	scan_word(occurences);

	
	if(is_anagram(occurences1, occurences2)){
		printf("The words are anagrams.\n");
		return 0;
	}
	printf("The words are not anagrams.\n");
	return 0;
}

void scan_word(int occurences[26]){
	switch(i){
		//first word
		case 1: while ((c = getchar()) != '\n'){
					if (isalpha(c)){
						occurences1[toupper(c) - 'A']++;
					}
				}
				break;
		//second word
		case 2: while ((c = getchar()) != '\n'){
					if (isalpha(c)){
						occurences2[toupper(c) - 'A']++;
					}
				}
				break;
	}
}

bool is_anagram(int occurrences1[26], int occurrences2[26]){
	//compares the two count
    for (i = 0; i < 26; i++) {
        if(occurences1[i] != occurrences2[i]){
            return false;
        }
    }
    return true;
}
