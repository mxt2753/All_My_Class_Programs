//Name: Mary-Rose Tracy 
//ID #: 1001852753
//1st clarify includes 
#include<stdio.h>
#include<string.h>
//I learned stdlib from my previous class
#include<stdlib.h>

int main()
{
    //State what the comuter needs to save
    int num1, num2;
    char word[20];
    //I did i spearately because it sepates it mentally for me.
    int i;
    //Now for the first statement
    printf("Please enter a number between 4-6: ");
    scanf("%d",&num1);
    //Now for the if else statements or in this case all if's.
    if( num1<4 ||num1>6)
    {
        printf("Number out of range!");
        //Learned this in a previous class it essentially prints exit & ends program.
        exit(0);
    }
    //end the loop now for the second statement
    printf("Enter a word with at least %d letters and at most 10 letters: ",num1);
    scanf("%s",word);
    //ifs for this string
    if(strlen(word)>10)
    {
        printf("Too many letters!");
        exit(0);
    }
    if(strlen(word)<num1) 
    {
        printf("Too few letters!");
        exit(0);
    }
    //Final statement
    printf("Please enter a number between 1-3: ");
    scanf("%d",&num2);
    //for the character
    for(i=0;i<num2;i++)
    {
        printf("%c",word[i]);
    }
}

