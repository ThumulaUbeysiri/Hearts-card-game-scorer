#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Feel free to change system sleep time as you wish.
//Make sure to insert integer values as user inputs.


int main()
{
    int choice;

    system("CLS");

    heartLogo();

    printf("\t1. 4 players\n");
    printf("\t2. 5 players\n");
    printf("\t3. 6 players\n");
    printf("\t4. 7 players\n");
    printf("\t5. 8 players\n\n");

    printf("Enter your choice :) :");
    scanf("%d",&choice);

    switch(choice)
    {

        case 1:
            fourPlayers();
            break;

        case 2:
            fivePlayers();
            break;

        case 3:
            sixPlayers();
            break;

        case 4:
            sevenPlayers();
            break;

        case 5:
            eightPlayers();
            break;

        default:
            printf("\nInvalid input please try again!!! :(");
            sleep(2);
            main();
            break;

    }



    return 0;
}

void fivePlayers()
{
     system("CLS");

     int player1,player2,player3,player4,player5;
     int p1TOT=0,p2TOT=0,p3TOT=0,p4TOT=0,p5TOT=0;

     heartLogo();

     printf("                                               ~ FIVE PLAYERS ~                                               \n");

     printf("To exit press 555 for player mark\n\n");

     while(1)
     {

         printf("Enter player 1 marks: ");
         scanf("%d",&player1);

         if(player1==555)
         {
             break;
         }

         p1TOT += player1;

         printf("Enter player 2 marks: ");
         scanf("%d",&player2);

         if(player2==555)
         {
             break;
         }

         p2TOT += player2;

         printf("Enter player 3 marks: ");
         scanf("%d",&player3);

         if(player3==555)
         {
             break;
         }

         p3TOT += player3;

         printf("Enter player 4 marks: ");
         scanf("%d",&player4);

         if(player4==555)
         {
             break;
         }

         p4TOT += player4;

         printf("Enter player 5 marks: ");
         scanf("%d",&player5);

         if(player5==555)
         {
             break;
         }

         p5TOT += player5;

         printf("------------------------------------------------\n");

         if(p1TOT >= 100||p2TOT >= 100||p3TOT >= 100||p4TOT >= 100||p5TOT >= 100)
         {
             break;
         }

     }

      printf("------------------------------------------------\n");
      printf("Marks of player 1 = %d\n",p1TOT);
      printf("Marks of player 2 = %d\n",p2TOT);
      printf("Marks of player 3 = %d\n",p3TOT);
      printf("Marks of player 4 = %d\n",p4TOT);
      printf("Marks of player 5 = %d\n",p5TOT);

      sleep(4);
      system("CLS");
      main();


    return 0;
}

void fourPlayers()
{
     system("CLS");

     int player1,player2,player3,player4;
     int p1TOT=0,p2TOT=0,p3TOT=0,p4TOT=0;

     heartLogo();

     printf("                                               ~ FOUR PLAYERS ~                                               \n");


     printf("To exit press 555 for player mark\n\n");

     while(1)
     {
         printf("Enter player 1 marks: ");
         scanf("%d",&player1);

         if(player1==555)
         {
             break;
         }

         p1TOT+=player1;

         printf("Enter player 2 marks: ");
         scanf("%d",&player2);

         if(player2==555)
         {
             break;
         }

         p2TOT+=player2;

         printf("Enter player 3 marks: ");
         scanf("%d",&player3);

         if(player3==555)
         {
             break;
         }

         p3TOT+=player3;

         printf("Enter player 4 marks: ");
         scanf("%d",&player4);

         if(player4==555)
         {
             break;
         }

         p4TOT+=player4;

         printf("------------------------------------------------\n");

         if(p1TOT >= 100||p2TOT >= 100||p3TOT >= 100||p4TOT >= 100)
         {
             break;
         }


     }


            printf("------------------------------------------------\n");
            printf("Marks of player 1 = %d\n",p1TOT);
            printf("Marks of player 2 = %d\n",p2TOT);
            printf("Marks of player 3 = %d\n",p3TOT);
            printf("Marks of player 4 = %d\n",p4TOT);

            sleep(4);
            system("CLS");
            main();
}

void sevenPlayers()
{
    system("CLS");

    int player1,player2,player3,player4,player5,player6,player7;
    int p1TOT=0,p2TOT=0,p3TOT=0,p4TOT=0,p5TOT=0,p6TOT=0,p7TOT=0;

    heartLogo();

    printf("                                               ~ SEVEN PLAYERS ~                                               \n");

    printf("To exit press 555 for player mark\n\n");

    while(1)
    {


        printf("Enter player 1 marks: ");
        scanf("%d",&player1);

        if(player1==555)
        {
            break;
        }

        p1TOT += player1;

        printf("Enter player 2 marks: ");
        scanf("%d",&player2);

        if(player2==555)
        {
            break;
        }

        p2TOT += player2;

        printf("Enter player 3 marks: ");
        scanf("%d",&player3);

         if(player3==555)
        {
            break;
        }

        p3TOT += player3;

        printf("Enter player 4 marks: ");
        scanf("%d",&player4);

         if(player4==555)
        {
            break;
        }

        p4TOT += player4;

        printf("Enter player 5 marks: ");
        scanf("%d",&player5);

         if(player5==555)
        {
            break;
        }

        p5TOT += player5;

        printf("Enter player 6 marks: ");
        scanf("%d",&player6);

         if(player6==555)
        {
            break;
        }

        p6TOT += player6;

        printf("Enter player 7 marks: ");
        scanf("%d",&player7);

         if(player7==555)
        {
            break;
        }

        p7TOT += player7;

        printf("------------------------------------------------\n");

        if(p1TOT >= 100||p2TOT >= 100||p3TOT >= 100||p4TOT >= 100||p5TOT >= 100||p6TOT >= 100||p7TOT >= 100)
        {
            break;
        }

    }

            printf("------------------------------------------------\n");
            printf("Marks of player 1 = %d\n",p1TOT);
            printf("Marks of player 2 = %d\n",p2TOT);
            printf("Marks of player 3 = %d\n",p3TOT);
            printf("Marks of player 4 = %d\n",p4TOT);
            printf("Marks of player 5 = %d\n",p5TOT);
            printf("Marks of player 6 = %d\n",p6TOT);
            printf("Marks of player 7 = %d\n",p7TOT);


            sleep(4);
            system("CLS");
            main();



    return 0;
}

void sixPlayers()
{

    system("CLS");

    int player1,player2,player3,player4,player5,player6;
    int p1TOT=0,p2TOT=0,p3TOT=0,p4TOT=0,p5TOT=0,p6TOT=0;

    heartLogo();

    printf("                                               ~ SIX PLAYERS ~                                               \n");

    printf("To exit press 555 for player mark\n\n");

    while(1)
    {
        printf("Enter plater 1 marks: ");
        scanf("%d",&player1);

        if(player1==555)
        {
            break;
        }

        p1TOT+=player1;

        printf("Enter plater 2 marks: ");
        scanf("%d",&player2);

        if(player2==555)
        {
            break;
        }

        p2TOT+=player2;

        printf("Enter plater 3 marks: ");
        scanf("%d",&player3);

        if(player3==555)
        {
            break;
        }

        p3TOT+=player3;

        printf("Enter plater 4 marks: ");
        scanf("%d",&player4);

        if(player4==555)
        {
            break;
        }

        p4TOT+=player4;

        printf("Enter plater 5 marks: ");
        scanf("%d",&player5);

        if(player5==555)
        {
            break;
        }

        p5TOT+=player5;

        printf("Enter plater 6 marks: ");
        scanf("%d",&player6);

        if(player6==555)
        {
            break;
        }

        p6TOT+=player6;

        printf("------------------------------------------------\n");

        if(p1TOT >= 100||p2TOT >= 100||p3TOT >= 100||p4TOT >= 100||p5TOT >= 100||p6TOT >= 100)
        {
            break;
        }



    }

    printf("------------------------------------------------\n");
    printf("Marks of player 1 = %d\n",p1TOT);
    printf("Marks of player 2 = %d\n",p2TOT);
    printf("Marks of player 3 = %d\n",p3TOT);
    printf("Marks of player 4 = %d\n",p4TOT);
    printf("Marks of player 5 = %d\n",p5TOT);
    printf("Marks of player 6 = %d\n",p6TOT);

    sleep(5);
    system("CLS");
    main();

    return 0;
}

void eightPlayers()
{
    system("CLS");

    int player1,player2,player3,player4,player5,player6,player7,player8;
    int p1TOT=0,p2TOT=0,p3TOT=0,p4TOT=0,p5TOT=0,p6TOT=0,p7TOT=0,p8TOT=0;

    heartLogo();

    printf("                                              ~ EIGHT PLAYERS ~                                               \n");

    printf("To exit press 555 for player mark\n\n");

    while(1)
    {
        printf("Enter player 1 marks: ");
        scanf("%d",&player1);

        if(player1==555)
        {
            break;
        }

        p1TOT+=player1;

        printf("Enter player 2 marks: ");
        scanf("%d",&player2);

        if(player2==555)
        {
            break;
        }

        p2TOT+=player2;

        printf("Enter player 3 marks: ");
        scanf("%d",&player3);

        if(player3==555)
        {
            break;
        }

        p3TOT+=player3;

        printf("Enter player 4 marks: ");
        scanf("%d",&player4);

        if(player4==555)
        {
            break;
        }

        p4TOT+=player4;

        printf("Enter player 5 marks: ");
        scanf("%d",&player5);

        if(player5==555)
        {
            break;
        }

        p5TOT+=player5;

        printf("Enter player 6 marks: ");
        scanf("%d",&player6);

        if(player6==555)
        {
            break;
        }

        p6TOT+=player6;

        printf("Enter player 7 marks: ");
        scanf("%d",&player7);

        if(player7==555)
        {
            break;
        }

        p7TOT+=player7;

        printf("Enter player 8 marks: ");
        scanf("%d",&player8);

        if(player8==555)
        {
            break;
        }

        p8TOT+=player8;

        printf("------------------------------------------------\n");

        if(p1TOT >= 100||p2TOT >= 100||p3TOT >= 100||p4TOT >= 100||p5TOT >= 100||p6TOT >= 100||p7TOT >= 100||p8TOT >= 100)
        {
            break;
        }

    }

    printf("------------------------------------------------\n");
    printf("Marks of player 1 = %d\n",p1TOT);
    printf("Marks of player 2 = %d\n",p2TOT);
    printf("Marks of player 3 = %d\n",p3TOT);
    printf("Marks of player 4 = %d\n",p4TOT);
    printf("Marks of player 5 = %d\n",p5TOT);
    printf("Marks of player 6 = %d\n",p6TOT);
    printf("Marks of player 7 = %d\n",p7TOT);
    printf("Marks of player 8 = %d\n",p8TOT);

    sleep(5);
    system("CLS");
    main();




    return 0;
}

void heartLogo()
{
     printf("----------------------------------------------------------------------------------------------------------------------\n");
     printf("                                                    HEARTS                                                     \n");
     printf("----------------------------------------------------------------------------------------------------------------------\n\n");

     return 0;

}

