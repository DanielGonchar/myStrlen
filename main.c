//
//  main.c
//  myStrlen
//
//  Created by comandante on 9/28/16.
//  Copyright © 2016 comandante. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define SIZE 1000


int mystrlen(char *str)
{
    int len = 0;
    int i;
    
    for (i=0; str[i] != 0; i++)
    {
        len++;
    }
    return(len);
}

int main(void)
{
    
    char myString[SIZE]; // size of the input
    
    int stringLength;
    
    printf("Enter your string to determine the lenght:\n");
    
    // First read in an input string
    if (fgets(myString, SIZE, stdin))
    {
        // input has worked, do something with data
        stringLength = mystrlen(myString);
        
        printf("Input is :  \n %s Calculated length is : %d\n",
               myString, stringLength-1);
        
    } else
    {
        printf("Error reading the string\n");
    }
    
    return 0;
}
