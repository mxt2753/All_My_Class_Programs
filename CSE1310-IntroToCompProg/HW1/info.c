//Mary-Rose Tracy 
//ID#: 1001852753

//First do #include 
#include <stdio.h>
//Now let's start out program 
int main(int argc, char**argv)
{
    //Initiale telling the computer what char and int are we 1st using.
    //Note: Name & Foods are strings not numbers.
    //String=%s & Int=%d essentially 
    char Name[20];
    int Age;
    char Food[20];
    //Now that we have categorized the 3 things lets print & scan them:
    
    // 1st Name:
    printf("Enter your name:\n");
    scanf("%s", Name);
    //2nd Age:
    printf("Enter your age:\n");
    scanf("%d",&Age);
    //3rd Food:
    printf("Enter you favorite food:\n");
    scanf("%s", Food);
    //Now that the computer scanf them lets mess with the age.
    //Say to the computer hey here's another int which is Final Age=+2.
    int Fin_Age=Age+2;
    //Printing the final Results
    printf("My name is: %s and my favorite food is %s!",Name, Food);
    //Noticies on the final it prints out *** on next line.
    printf("\n***\n");
    //Now print final age & Final Statment
    printf("I am %d years old and in 2 years I will be %d!",Age, Fin_Age);
}
