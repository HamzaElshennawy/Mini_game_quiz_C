



                //MINI_GAME_QUIZ_PROJECT
                //MADE_BY_:
                //HAMZA_ELSHENNAWY_1710874
                //YUSUF_HAMDY_HARB_19104636
                //MOHAMED_ERFAN_19106045


#include <stdio.h>
#include <stdlib.h>
//#include "mini_game_project.h"

void help();
void show_record();
int score(int counter);
void edit_score(int score, char playername[15]);
void show_record();
void reset_score();



int main()
{

    int loop=1;
   // int score;

    char ans;
    int hightest_record;
    char playername[15];
    while(loop==1)
    {
        system("cls");
        printf("\t\t\tC PROGRAM QUIZ GAME");
        printf("\n___________________________________________________________________________________________");
        printf("\n\t\t\tWELCOME TO THE GAME");
        printf("\n___________________________________________________________________________________________");
        printf("\n___________________________________________________________________________________________");
        printf("\n\t\t\tBECOME A MILLIONAIRE!!!!");
        printf("\n___________________________________________________________________________________________");
        printf("\n___________________________________________________________________________________________");
        printf("\n\n-> Press S to start the game");
        printf("\n-> Press V to view the highest score");
        printf("\n-> Press R to reset score");
        printf("\n-> Press H for help");
        printf("\n-> Press Q to quit");
        printf("\n-> Your choice: ");
        char opt;
        scanf("%c",&opt);
        if(opt=='s')
        {
            help();
            getch();
            system("cls");
            int counter=0;
            printf("\n\n\n\n\t\t\t\tPlease Enter Your Name: ");
            scanf("\n%s",&playername);
            for(int i=1 ; i<=10 ; i++)
            {
                int qunum=i;//qunum is the question number...
                switch(qunum)
                {
                case 1:
                    system("cls");
                    printf("\n1-The scanf standard library function displays information on the screen.");
                    printf("\n1.True.\t\t2.False\n");
                    printf("Your answer: ");
                    scanf("\n%c",&ans);
                    printf("\n");
                    if (ans=='f')
                    {
                        counter++;
                        printf("Correct...");
                        getch();
                        break;
                    }
                    else
                    {
                        printf("Wrong...");
                        getch();
                        break;
                    }
                case 2:
                    system("cls");
                    printf("2-Every C program begins execution at the function main.");
                    printf("\n1.True.\t\t2.False\n");
                    printf("Your answer: ");
                    scanf("\n%c",&ans);
                    printf("\n");
                    if (ans=='t')
                    {
                        counter++;
                        printf("Correct...");
                        getch();
                        break;
                    }
                    else
                    {
                        printf("Wrong...");
                        getch();
                        break; //action
                    }

                  case 3:
                    system("cls");
                    printf("3-(X=+1)is C statement that add 1 to integer variable x.");
                    printf("\n1.True.\t\t2.False\n");
                    printf("Your answer: ");
                    scanf("\n%c",&ans);
                    printf("\n");
                    if (ans=='f')
                    {
                        counter++;
                        printf("Correct...");
                        getch();
                        break;

                    }
                    else
                    {
                       printf("Wrong...");
                       getch();
                       break; //action
                    }
                }
            }
            if(counter<2)//if the player didnot answer 2 of 3 correct the game will stop.
            {
                printf("SORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME\n");
                getch();
                return 0;
            }
            else
            {
                printf("\nYou are good to start..\n");
                getch();
                for (int v=4;v<11;v++)
                {
                    int qunm=v;
                    switch(qunm)
                    {
                    case 4:
                        system("cls");
                        printf("4-The while repetition statement specifies that a statement or group of statements is to be executed repeatedly while some condition remains true.");
                        printf("\n1.True.\t\t2.False\n");
                        printf("Your answer: ");
                        scanf("\n%c",&ans);
                        printf("\n");
                        if (ans=='t')
                        {
                            counter++;
                            printf("Correct...");
                            getch();
                            break;
                        }
                        else
                        {
                            printf("Wrong...");
                           getch();
                           break; //action
                        }
                    case 5:
                        system("cls");
                        printf("5-The for statement is used to make decisions.");
                        printf("\n1.True.\t\t2.False\n");
                        printf("Your answer: ");
                        scanf("\n%c",&ans);
                        printf("\n");
                        if (ans=='f')
                        {
                            counter++;//action
                            printf("Correct...");
                            getch();
                            break;
                        }
                        else
                        {
                            printf("Wrong...");
                            getch();
                            break;//action
                        }
                    case 6:
                        system("cls");
                        printf("6-The escape sequence \\t represents the newline character, which\ncauses the cursor to position to the beginning of the next line on the screen.");
                        printf("\n1.True.\t\t2.False\n");
                        printf("Your answer: ");
                        scanf("\n%c",&ans);
                        printf("\n");
                        if (ans=='f')
                        {
                            counter++;//action
                            printf("Correct...");
                            getch();
                            break;
                        }
                        else
                        {
                            printf("Wrong...");
                            getch();
                           break; //action
                        }
                    case 7:
                        system("cls");
                        printf("7-All variables must be given a type when they are defined.");
                        printf("\n1.True.\t\t2.False\n");
                        printf("Your answer: ");
                        scanf("\n%c",&ans);
                        printf("\n");
                        if (ans=='t')
                        {
                            counter++;//action
                            printf("Correct...");
                            getch();
                            break;
                        }
                        else
                        {
                            printf("Wrong...");
                            getch();
                            break;//action
                        }
                    case 8:
                        system("cls");
                        printf("8-A variable that is known only within the function in which it is defined is called a global variable.");
                        printf("\n1.True.\t\t2.False\n");
                        printf("Your answer: ");
                        scanf("\n%c",&ans);
                        printf("\n");
                        if (ans=='f')
                        {
                            counter++;//action
                            printf("Correct...");
                            getch();
                            break;
                        }
                        else
                        {
                            printf("Wrong...");
                            getch();
                            break;//action
                        }
                    case 9:
                        system("cls");
                        printf("9-A function prototype declares the return type of the function and declares the number, the types, and the order of the parameters the function expects to receive.");
                        printf("\n1.True.\t\t2.False\n");
                        printf("Your answer: ");
                        scanf("\n%c",&ans);
                        printf("\n");
                        if (ans=='t')
                        {
                            counter++;//action
                            printf("Correct...");
                            getch();
                            break;
                        }
                        else
                        {
                            printf("Wrong...");
                           getch();
                           break; //action
                        }
                    case 10:
                        system("cls");
                        printf("10-Keywords extern and static are used to declare identifiers for variables and functions of static storage duration.");
                        printf("\n1.True.\t\t2.False\n");
                        printf("Your answer: ");
                        scanf("\n%c",&ans);
                        printf("\n");
                        if (ans=='t')
                        {
                            counter++;//action
                            printf("Correct...");
                            getch();
                            break;
                        }
                        else
                        {
                            printf("Wrong...");
                            getch();
                            break;//action
                        }
                       // return i=11;


                    }
                }

            }



            //score(counter);
            //edit_score(score,playername);

            int new_score= counter*100000;
            //printf("\n\t\t\tYou scored: %d$\n\n\n",new_score);
            printf("\n\n%d",score(counter));
            edit_score(new_score,playername);

        }

        else if(opt=='v')
        {
            show_record();
        }
        else if(opt=='r')
        {
            //printf("%d",score=0);
            reset_score();
            printf("Score is zero....");
        }
        else if(opt=='h')
        {
            help();
        }
        else if(opt=='q')
        {
            exit(0);
        }
        else
        {
            printf("Please enter a valid letter");
        }
        getch();
    }

}






void help()
{
    printf("\n>>There are 2 rounds in this quiz Game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n>>In warmup round you will be asked a total of 3 questions to test your\ngeneral knowledge. You are eligible to play the game if you give atleast\n2 right answers, otherwise you cannot proceed further to the Challenge Round.");
    printf("\n>>Your game starts with CHALLENGE ROUND. In this round you will be asked a\ntotal of 10 questions. Each right answer will be awarded $100,000!\nBy this way you can win upto ONE MILLION cash prize!!!!.........");
    printf("\n\n>>You will be asked questions continuously, till right answers are given.");
    printf("\n>>No negative marking for wrong answers!");
}

/*void show_record()
{
	char name[15];
	float score;
	FILE *records;
	records=fopen("score.txt","r");
	fscanf(records,"%s%f",&name,&score);
	printf("\n\n\t\tHighest Score is: %s %0.2f\n",name,score);
	fclose(records);
}*/

int score(int counter)
{
    int new_score= counter*100000;
    if (new_score>0 && new_score<999999)
    {
        system("cls");
        printf("\n\n\t\tYou won: %d$",new_score);

    }
    else if (new_score==1000000)
    {
        system("cls");
        printf("\n\n\t\tYou are a MILLIONARE!!!");
        printf("You won %d",new_score);

    }
    else
    {
        system("cls");
        printf("\n\n\t\tPlease try again");
    }
    return new_score;
}
void edit_score(int new_score,char playername[15])
{
    //system("cls");
	int current_score;
	char name[15];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%d",&name,&current_score);
	//fprintf(f,"%s\n%2d",playername,current_score);
	if (new_score>=current_score)
    {
        current_score=new_score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%d",playername,current_score);
	    fclose(f);
    }

}

void show_record()
{
    char name[15];
    int highest_recor;
    FILE *f;
    f=fopen("score.txt","r");
    fscanf(f,"%s%d",&name,&highest_recor);
    printf("\n\n\t\t");
    printf("\n\n\t\t Highest Score is: %d$ for:  %s",highest_recor,name);
    printf("\n\n\t\t");
    fclose(f);
    getch();
}

void reset_score()
    {

        system("cls");
        int _score;
        char player__name[15];
        FILE *f;
        f=fopen("score.txt","w");
        fscanf(f,"%s%f",&player__name,&_score);
        _score=0;
        fprintf(f,"%s\n%d",player__name,_score);
        fclose(f);
    }


