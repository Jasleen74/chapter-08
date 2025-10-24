#include<stdio.h>
#include<string.h>


int main() {
     char string [] = "Mustang";

     // FOR THE LENGTH OF THE STRING
     int length = strlen(string);
     printf("The length of the string is : %d\n", length);


     // FOR COPYING THE CONTENTS OF SECOND STRING TO THE FIRST 
     char target [50] ;      
     strcpy (target, string);  //here first we write the name of the string where we want to copy the contents then the other string name 
     printf("The copy of %s is to %s\n", string,target );


     //FOR CONCATENAATING THE CONTENTS OF TWO DIFFERENET STRINGS
     char s1 [12]= "Hello";
     char s2 [12]= " World";
     printf("The first string was %s and the second was %s\n",s1,s2);

     strcat(s1,s2);

     printf("Now the copy is in the first string : %s ", s1);  //the content is copied into the strog which we write the first 
     



  return 0;
}