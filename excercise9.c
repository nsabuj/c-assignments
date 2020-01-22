#include <stdio.h>
#include <stdlib.h>

  void append(char* str1, char* str2) {
      printf("Result of append: %s%s",str1,str2);
    }


int main(){

char first_word[10],second_word[10];
printf("Enter first word: ");
scanf("%s",first_word);

printf("Enter second word: ");
scanf("%s",second_word);

append(first_word,second_word);
return 0;
}
