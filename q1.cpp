/*

Write a program to read a file and count 
the number of digits in it. The file may 
contain an alphanumeric string.

*/
#include <stdio.h>
#include <stdlib.h>
#include "string"
using namespace std;

int main(int argc, char *argv[])
{
    FILE *filePointer;
    char ch;
    int counter = 0;
    filePointer = fopen(argv[1], "r");

    if (filePointer == NULL)
    {
        printf("%s file is not available \n", argv[1]);
    }
    else
    {
        while ((ch = fgetc(filePointer)) != EOF)
        {
            int temp = int(ch);
            if (int(ch) >= 48 && int(ch) <= 57)
            {
                counter = counter + 1;
                printf("%c \t %d \n", ch, temp);
            }
        }
        printf("There are %d number of digits in text file\n", counter);
    }
    fclose(filePointer);

    return 0;
}
