//name:Mary-Rose Tracy
//ID #:1001852753
#include <stdio.h>

int main()
//Learned this in previous class, I told the computer to save this space as an integer.
//or save the idea as an int
{
int CalSA(int L,int H,int W)
//Said to the computer hey calulate this before I enter anything.
{
    return 2*((W*L)+(H*L)+(H*W));
}
//Now for the statements
        printf("***Hello! Please pick from the following options:***\n");
        printf("1)Buy standard wrapping paper-press 1\n");
        printf("2)Buy holiday edition wrapping paper-press 2\n");
        //Asking what are the options for this user
        int options;
        //tell the computer to contimplate what the user pressed for options
        scanf("%d",&options);
        //H=Height, W=Width, L=Length
        int H,W,L;
        //So if the user entered 1
        if(options==1)
        {
            //Printf these statments and let user enter them
            printf("You have selected standard wrapping paper\n");
            printf("Please enter the size of your gift(in inches):\n");
            //Length Op1
            printf("Length: ");
            scanf("%d",&L);
            //Height Opt 1
            printf("Height: ");
            scanf("%d",&H);
            //Width Opt 1
            printf("Width: ");
            scanf("%d",&W);
        //Calculate for options 1
        int SA=CalSA(L,H,W);
       
       printf("You will pay $%d at the counter. Thank you for shopping with us!\n",SA);
        }
        //Essenitally repeat if the user pressed option 2
        else if(options==2)
        {
        printf("You have selected holiday wrapping paper\n");
        printf("Please enter the size of your gift(in inches):\n");
                printf("Length: ");
        scanf("%d",&L);
        printf("Height: ");
        scanf("%d",&H);
        printf("Width: ");
        scanf("%d",&W);
        
        int SA=CalSA(L,H,W);
       //now for essenitally the error code, meaning if the user puts neither inputs.
        printf("You will pay $%d at the counter. Thank you for shopping with us!\n",SA*2);
        }
        else
        {
                printf("Invalid Option pressed\n");
        }
}



