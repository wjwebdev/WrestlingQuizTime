#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char playerName[30];
    char playerAnswer;
    int playerScore = 0;

    //Prints Game Title
    printf("*** WELCOME TO WRESTLING QUESTION TIME! ***\n\n");

    printf("********************************************************************\n");
    printf("HOW TO PLAY: PRESS y for Yes or n for No to answer all the questions\n");
    printf("********************************************************************\n\n");


    //Gets input from user
    printf("Enter Player Name: ");
    scanf("%s", playerName);

    printf("Hello %s in order to win this game you'll have to answer 10 questions and must answer them all correctly.\n\n");


    //Initialising questions and conditionals

    //Question 1
    printf("Q1: Did Vince McMahon win the 1999 Royal Rumble yes or no? ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That's the correct answer! \n");
        playerScore++;
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("That was the incorrect answer! onto the next question... \n");
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);


    //Question 2
    printf("Q2: Did Kane end Undertakers streak at Wrestlemania 30 in 2014? ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That was the incorrect answer, Undertaker was defeated by Brock Lesnar at Wrestlemania 30! \n");
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("That's the correct answer! it was in fact Brock Lesnar!\n");
        playerScore++;
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);

    //Question 3
    printf("Q3: is Hulk Hogan a five-time champion? ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That's the correct answer! Hulk Hogan is a five-time champion brother! \n");
        playerScore++;
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("That was the incorrect answer brother Hulk Hogan is a five-time champion! \n");
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);


    //Question 4
    printf("Q4: Did Mick foley have multiple alter egos? ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That's the correct answer! Mick foley had Man-kind, Cactus Jack & Dude Love! Have a nice day! \n");
        playerScore++;
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("That was the incorrect answer, bang bang!  \n");
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);


    //Question 5
    printf("Q5: Was undertaker final match against AJ Styles at Wrestlemania 36 in 2020? ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That's the correct answer! Undertaker destroyed AJ Styles in a boneyard match. \n");
        playerScore++;
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("That was the incorrect answer, bang bang!  \n");
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);

    //Question 6
    printf("Q6: Was Kevin Nash in D-Generation X? ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That's the incorrect answer, Kevin Nash was never in DX but was part of NWO in WCW. \n");
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("That's the correct answer, Kevin Nash was never part of DX. \n");
        playerScore++;
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);


    //Question 7
    printf("Q7: Did John Cena ever drop a rap freestyle on the mic? ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That's the correct answer, he used to drop lyrics during his time as mr thuganomics. \n");
        playerScore++;
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("That's incorrect, obviously you couldn't see him! \n");
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);


    //Question 8
    printf("Q8: Is Jim Cornette close friends with Vince Russo ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That's the incorrect answer, Jim Cornette hates Russo!  \n");
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("That's the correct answer! Jim Cornette has expressed on many occasions how we would love to kill Vince Russo. \n");
        playerScore++;
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);

    //Question 9
    printf("Q9: Did ECW stand for Extreme Cool Wrestling? ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That's the incorrect answer, ECW stood for Extreme Championship Wrestling! \n");
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("That's the correct answer! ECW stood for Extreme Championship Wrestling! \n");
        playerScore++;
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);

    //Question 10
    printf("Q10: Did Shane McMahon ever show up on Monday night Nitro in WCW? ");
    scanf(" %c", &playerAnswer);


   if (playerAnswer == 'y' || playerAnswer == 'Y')
    {
        printf("That's the correct answer! Shane did appear on Monday night Nitro in 2001! \n");
        playerScore++;
    }
    else if (playerAnswer == 'n' || playerAnswer == 'N')
    {
        printf("Incorrect answer, Shane appeared on Monday Nitro in 2001!  \n");
    }
    else
    {
        printf("Invalid Answer");
    }

    printf("Current Score: %d\n\n", playerScore);

    if (playerScore == 10)
    {
        printf("CONGRATULATIONS YOU HAVE ANSWERED ALL THE QUESTIONS CORRECTLY\n");
    }
    else
    {
        printf("YOU FAILED TO ANSWER ALL THE QUESTIONS CORRECTLY.\n");
    }

    return 0;
}



