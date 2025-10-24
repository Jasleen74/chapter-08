/*Quick Quiz: Create a string using double quotes and print its content using a loop.*/
#include<stdio.h>
int main() {
    //char mystring[]= {'s', 'h' , 'a', 'm' , '\0'};
    // Or we can write this as 
    char mystring[] = "sham";

    for (int i = 0 ; i <4 ; i ++){
        printf("Character is %c\n", mystring[i]);
    }
     
  
 return 0;
}