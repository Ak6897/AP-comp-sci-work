//Angela
//9-17-21

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//declare function
string reverse(string sentence);
//function to reverse the string
//remeber to declare type
string reverse (string sentence){

    size_t length = strlen (sentence);

     char backwards[length];

     // set i equal to the number of character in the sentence
    for(int i = 0; i<length; i++){
         //set i so that the first letter in backwards is the last letter in sentence
        backwards[i] = sentence[length-i-1];

    }


    string backward = backwards;
    return backward;

}

int main (void){

    string sentence = get_string("Input: \n");
    printf("Output:%s\n", reverse (sentence));



}