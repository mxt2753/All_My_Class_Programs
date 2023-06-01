//Name: Mary-Rose Tracy 
//ID #: 1001852753
#include <stdio.h>
#include <string.h> 

int valid_num(char credit_card[])
{
    //Says to code if it's viable or not
  return (strlen(credit_card)==16)&&(credit_card[0]=='5' || credit_card[0]=='4');
}

void get_creditcard_info(char wallet[][20], int cvv[], int count)
{
//Using a loop within a loop to get the desired income
  for(int i=0; i<count; i++)
  {
    printf("--%d. Enter credit card number: ",i+1);
    scanf("%s",wallet[i]);
    //Using an while statment to see if it's correct or not
    while(1)
    {
      if(valid_num(wallet[i])!=1)
      {
        printf("Not a valid number. Enter a valid credit card number: ");
        scanf("%s",wallet[i]);
        continue;
      }
      else
      {
        printf("Enter the cvv number: ");
        scanf("%d",&cvv[i]);
        break;
      }
    }
  }
  printf("--All credit cards in your wallet:\n");//Now let's print out the function for credit card details
  for(int i=0; i<count; i++){
    printf("%d. %s\n",i+1,wallet[i]);
  }
}

int use_creditcard(char wallet[][20], int cvv[], int count)
{
    //Define chars and int/ make space for computer
  char card[20];
  int num;
  int flag=0;
  printf("Enter card to use: ");
  scanf("%s",card);
  printf("Enter cvv number: ");
  scanf("%d",&num);
 
  for(int i=0; i<count; i++)
  {
    if(strcmp(card,wallet[i])==0 && cvv[i]==num)
    {
      flag=1;
      break;
    }
  }
  return flag;
}
//Then add the final unchanged program that I have to include
int main(int argc, char **argv)
{
  char wallet[3][20];
  int cvv_numbers[3];
  get_creditcard_info(wallet,cvv_numbers,3);
  int answer = use_creditcard(wallet,cvv_numbers,3);

  if(answer)
  {
    printf("Card accepted!\n");
  }
  else
  {
    printf("Card rejected!\n");
  }
}

