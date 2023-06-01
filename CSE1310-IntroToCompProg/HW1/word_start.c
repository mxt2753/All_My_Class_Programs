//name:Mary-Rose Tracy
//ID #:1001852753
#include <stdio.h>
//Learned from previous class
#include <string.h>

int main()
{
    //start by defining what the computer needs to save 
    char word[100];
    printf("Please enter a word: ");
    scanf("%s",word);
    //If the word equals a number or somethign its neither
    if(strlen(word)==0)
    {
        printf("starts with neither a vowel nor a consonant");
    }
    else
    {
        if(word[0]>='a' && word[0]<='z')
        {
            //Im essnetially telling the computer hey if its starts with vowels then it equals to 
            //starts with vowel option
            if(word[0]=='a' || word[0]=='e' || word[0]=='i' || word[0]=='o' || word[0]=='u')
            {
                printf("%s starts with vowel.\n",word);
            }
            //if it's anythign else it's a consonant
            else
            {
                printf("%s starts with consonant.\n",word);
            }
        }
        //Now what I'm doing is the same exact thign just in capitalization
        else if(word[0]>='A' && word[0]<='Z')
        {
            if(word[0]=='A' || word[0]=='E' || word[0]=='I' || word[0]=='O' || word[0]=='U')
            {
                printf("%s starts with vowel.\n",word);
            }
        else
        {
            printf("%s starts with consonant.\n",word);
        }
    }
    //Anything with a number or special character is neither vowel nor consonant
    else
    {
        printf("%s starts with neither a vowel nor a consonant.\n",word);
    }
}
}

