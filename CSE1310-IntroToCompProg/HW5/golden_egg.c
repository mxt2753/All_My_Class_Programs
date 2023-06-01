//Name: Mary-Rose Tracy 
//ID #: 1001852753

//Do all the arguements humanly possible lol.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Let's define the size of the program because I noticed I got an error if I didn't
#define SIZE 4

//Let's make the function and get space from the computer
void give_chicken_info(int eggs[SIZE],char names[SIZE][20])
{
    //Let's Make a loop
    for(int i=0;i<SIZE;i++)
    {
        printf("Enter chicken name: ");
        //To enter the names of all the chicken in essentially a loop for 4. so i++=4.
        scanf("%s",&names[i]); 

         if(i>=1) 
         //use this so that it won't create an infinite loop.
        {
            int j=i-1;   //Make j the number minus 1

            while(j>=0 )
            //Makes arry finish essentially
            {
                //This loop is for if the user puts the same thing already
                if(strcmp(names[i],names[j])==0)
                {
                    printf("We already have a chicken named %s . Give another name: ");
                    //Makes the input the name again and it looks different from the loop.
                    scanf("%s",&names[i]); 
                    //Then when user enters a different chicken then it's still minus 1.
                    j=i-1;
                    //The continute function which I learned before essentially says to the the computer just implement this loop
                    //& comtinute with the problem solving.
                    continue;
                }
                //Make a decrement iterator, talked about in lect 11
                j--; 
            }

        }
        printf("How many eggs did %s lay? ",names[i]);
        //Then when you finnish the other loop the user must enter the eggs=%d
        scanf("%d",&eggs[i]); 
    }
}

//Now we need a loop/finction that creates a calculation of eggs
int go_to_market(int eggs[SIZE])
{
    int sum=0;
    for(int i=0;i<SIZE;i++)
    //This calc the eggs together
        sum+=eggs[i];
//this function below says to calc IF the farmer can sell which is above
    if(sum>=30) 
        return 0;
//Then this is for if the farmer CANNOT sell.
    else return 1; 
}

//The main program that's not suppose to change in order to get credit.
//You put this last because you need to still fit the function in essentially.
//also it's the last comments of the sample.
int main(int argc, char **argv)
{

    int chicken_eggs[SIZE]={0};
    char chicken_names[SIZE][20];
    int value=1;
    while(value)
    {
        printf("~~~Welcome to the best chicken farm ever!!!~~~\n");
        give_chicken_info(chicken_eggs,chicken_names);
        value=go_to_market(chicken_eggs);

        if(!value)
        {
            printf("Congrats Farmer Bob! You get to go sell your golden eggs at the market! Good bye and good luck! :)\n\n");

        }

        else
        {
            printf("Sorry Farmer Bob.Let's try again to get enough golden eggs next month...\n\n");
        }
    }
}

