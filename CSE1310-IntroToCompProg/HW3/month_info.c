//Name: Mary-Rose Tracy 
//ID #:1001852753
//Enter Includes
#include <stdio.h>
#include <string.h>
//I'm dead tired and it's alot to explain
int main() 
{
    char month[20];
    
    printf("Please enter the name of a month: ");
    scanf("%s",month);
    
    for(int i = 0; month[i]; i++)
    {
        month[i] = tolower(month[i]);
    }
    if(strcmp("january",month)==0)
    {
        printf("January is the first month");
    }
    else if(strcmp("february",month)==0)
    {
        printf("February is the second month");
    }
    else if(strcmp("march",month)==0)
    {
        printf("March is the third month");
    }
    else if(strcmp("april",month)==0)
    {
        printf("April is the forth month");
    }
    else if(strcmp("May",month)==0)
    {
        printf("May is the fifth month");
    }
    else if(strcmp("june",month)==0)
    {
        printf("June is the sixth month");
    }
    else if(strcmp("july",month)==0)
    {
        printf("July is the seventh month");
    }
    else if(strcmp("august",month)==0)
    {
        printf("August is the eighth month");
    }
    else if(strcmp("september",month)==0)
    {
        printf("September is the ninth month");
    }
    else if(strcmp("october",month)==0)
    {
        printf("October is the tenth month");
    }
    else if(strcmp("november",month)==0)
    {
        printf("November is the eleventh month");
    }
    else if(strcmp("december",month)==0)
    {
        printf("December is the twelfth month");
    }
    else
    {
        printf("Unkown month: %s",month);
    }
}

