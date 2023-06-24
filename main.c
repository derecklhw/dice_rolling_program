#include <stdio.h>
#include <stdlib.h>
#include <time.h> /*needed just for the srand seed */
#include <string.h>

/******************************************************** Functions definition ***************************************************************************/
int startGenerator(void)
{
    srand(time(NULL)); /*to set the starting value seed;
    Makes use of the computer's internal clock to control the choice of the seed.
    Since time is continually changing, the seed is forever changing*/

    int faces, throws, roll;
    float occurrence, count = 0;

    /* scanf function to ask user for a number of faces of a dice*/
    printf("\nEnter the number of faces of a dice, range between 1 to 25: ");
    scanf("%d" , &faces);

    /* while loop is used to check that parameters for number of faces is correct.
     If one of the condition is true, the while loop will execute below statements*/
    while (faces < 2 || faces > 24)
    {
        printf("Invalid Parameters, re-enter the number of faces: ");
        scanf("%d" , &faces);
    }
    /* scanf function to ask user for number of throws*/
    printf("\nEnter the number of throws, range between 1 to 500: ");
    scanf("%d", &throws);

    /* while loop is used to check that parameters for number of throws is correct*/
    while (throws < 2 || throws > 499)
    {
        printf("Invalid Parameters, re-enter the number of throws: ");
        scanf("%d" , &throws);
    }

    printf("\n");
    int array[throws];

    /* for loop will iterate below statements for the same amount of times as the number of throws*/
    for (int k = 1;k <= throws; k++)
    {
        /* rand() will produce a random number from 0 to RAND_MAX maximum value that can be returned*/
        roll = rand() % faces + 1;
        printf("%d throw will roll a %d\n",k,roll);

        array[k] = roll; /*Each current roll value is inserted in a different index of an array*/
    }

    printf("\n");

    /* the 1st for loop will iterate and assign i to each face's number then will print number of occurrence for each face in percentage*/
    for (int i = 1; i <= faces; i++)
    {

        /*the 2nd for loop will compare the current face in the 1st loop with each value of each index present in the array*/
        for (int j = 1; j <= throws; j++)
        {
            /* if the current face is equal to the value's index, add 1 to count else nothing happen*/
            if (array[j] == i)
            {
                count++;
            }
        }
        /* calculate the number of occurrence*/
        occurrence = (count/throws)*100;
        printf("The number of occurrence for %d is %.2f %%\n",i,occurrence);
        /* reset the count to zero for each iteration*/
        count = 0;
    }
    return 0;
}
/*********************************************************************************************************************************************************/
int main(void)
{
    printf("Welcome to the dice rolling program\n");

    int key, y;

    printf("Press any key to launch the dice generator or press ESC button to terminate the program\n");
    key = getchar(); /*used to read a single character from the keyboard and store it in a variable key.*/

    /* if the key is equal to ASCII value of ESC button i.e 27, terminate the program else execute the else statement*/
    if (key == 27){
       printf("terminating...\n");
    }
    else{
        printf("loading...\n");
        startGenerator(); /*function to start the generator*/

        char again[5];
        /* See if user want to use the dice generator again*/
        printf("\nAnother need of a dice generator? Enter YES or NO: \n");
        scanf("%s", again);

        /* strcmp function takes two strings as arguments and compare these two strings lexicographically.
        a while statement to see if the char array again matches with string "yes"*/
        while (strcmp(again , "YES") == 0)
        {
            startGenerator();
            printf("\nAnother need of a dice generator? Enter YES or NO: \n");
            scanf("%s", again);
        }
        }

    printf("\nThanks for your visit");
    return 0;
}

