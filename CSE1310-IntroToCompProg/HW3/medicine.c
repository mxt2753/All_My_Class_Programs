//Name: Mary-Rose Tracy
//ID Number:1001852753

#include<stdio.h>
#include<string.h>

int main()
{
    //There are two types of pills 
    char Pill1[20];
    char Pill2[20];
    char Pill3[20];
    char stark[20]; //I need an extra space so I just named it stark
    int Pills_1=0;
    int Pills_2=0;
    int Pills_3=0;
    int FPills=0;
    int V;

    printf("Enter Patient 1 name: ");
    scanf("%s",Pill1);

    printf("Enter Patient 2 name: ");
    scanf("%s",Pill2);

    printf("Enter Patient 3 name: ");
    scanf("%s",Pill3);

    while(1)
    {
        printf("Enter Patient name taking pills: ");
        scanf("%s",stark);
        //This line of code essenitally check if it's right
        if(strcmp(stark,Pill1)==0) 
        {
            printf("Patient found-patient #1: How many pills? ");
            scanf("%d",&V);      //Inputing the pill I guess, I'm dead tired
            Pills_1=Pills_1+V;
            printf("Total pills so far for %s: %d\n",stark,Pills_1);
            FPills=FPills+Pills_1; 
        } //Let's Get the total amount of the pills 
        else if(strcmp(stark, Pill2)==0)
        {
            printf("Patient found-patient #2: How many pills? ");
            scanf("%d",&V);
            Pills_2=Pills_2+V;
            printf("Total pills so far for %s: %d\n",stark,Pills_2);
            FPills=FPills+Pills_2;
        }
       else if(strcmp(stark,Pill3)==0)
        {
            printf("Patient found-patient #3: How many pills?");
            scanf("%d",&V);
            Pills_3=Pills_3+V;
            printf("Total pills so far for %s: %d\n",stark,Pills_3);
            FPills=FPills+Pills_3;
        }
        else if(strcmp(stark,"exit")==0)
        {
              printf("Exiting...\n"); //Ending the program almost like a video game
              break;

        }
        else
        {
            printf("Sorry, patient not found\n"); 
            continue;
        } //This is for ^^ patient that isnt in the roster essentially


    }
    char DC[10];
    while(1)
    {
    printf("Would you like to see the total pill amounts for each patient?\n");
    scanf("%s",DC);
    if(strcmp(DC,"yes")==0) 
    {
        printf("%s:%d \n",Pill1,Pills_1);
        printf("%s:%d \n",Pill2,Pills_2);
        printf("%s:%d \n",Pill3,Pills_3);
        break;
    }
    else if(strcmp(DC,"no")==0)
    {//The total amount for the user
        printf("Ok. Total pills dispensed: %d\n",FPills); 
        break;
    }
    else
    {
        printf("Answer not recognized. Answer yes or no.\n");
        continue;
    }
    }
}


