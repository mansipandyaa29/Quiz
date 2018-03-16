#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, score;
    int music();
    int anime();
    int math();
    printf("Enter the number corresponding to your choice.\n1.Music\n2.Anime\n3.Math\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: score=music();
    case 2: score=anime();
    case 3: score=math();
    }
    printf("Score = %d",score);
    return 0;
}

int music()
{
    int score=0;
    int ans;
    printf("Q1.In which year did the \"Wish you were here\" album by Pink Floyd release?\n");
    printf ("1.1999\n2.1975\n3.1983\n4.2017\n");
    scanf("%d",&ans);
    if (ans==2)
    {
        printf("correct\n");
        score+=2;
    }
    else
    {
        printf("incorrect\n");
        score-=1;
    }
     printf("Q2.In which year did Bob Marley die?\n");
    printf ("1.1981\n2.1897\n3.1985\n4.2010\n");
    scanf("%d",&ans);
    if (ans==1)
    {
        printf("correct\n");
        score+=2;
    }
    else
    {
        printf("incorrect\n");
        score-=1;
    }
     printf("Q3.Who wrote the national anthem of India?\n");
    printf ("1.Lata Mangeshkar\n2.Rabindranath Tagore\n3.Asha Bhosle\n4.Justin Beiber\n");
    scanf("%d",&ans);
    if (ans==2)
    {
        printf("correct\n");
        score+=2;
    }
    else
    {
        printf("incorrect\n");
        score-=1;
    }
    return score;
}
int anime()
{
    int score=0;
    int ans;
    printf("Q1.How did zoro lose his eye in One Piece?\n");
    printf ("1.got the scar from hawkeye.\n2.scarred by luffy.\n3.went on the wrong road and fell down.\n4.got into a fight with sanji.\n");
    scanf("%d",&ans);
    if (ans==3)
    {
        printf("correct\n");
        score+=2;
    }
    else
    {
        printf("incorrect\n");
        score-=1;
    }
     printf("Q2.How does the anime open in Norigami?\n");
    printf ("1.The opening song.\n2.scene in a random highschool.\n3.Him flipping a coin.\n4.Him facing the accident.\n");
    scanf("%d",&ans);
    if (ans==3)
    {
        printf("correct\n");
        score+=2;
    }
    else
    {
        printf("incorrect\n");
        score-=1;
    }
     printf("Q3.Who kills Kokoro Sensei in Assasination Classroom?\n");
    printf ("1.Bitch Sensei\n2.Nagisa\n3.The entire 3E class\n4.All of the above\n");
    scanf("%d",&ans);
    if (ans==4)
    {
        printf("correct\n");
        score+=2;
    }
    else
    {
        printf("incorrect\n");
        score-=1;
    }
    return score;

}
int math()
{
    int score=0;
    int ans;
    printf("Q1.What's 2+2?\n");
    printf ("1.2\n2.4\n3.Infinity\n4.100\n");
    scanf("%d",&ans);
    if (ans==2)
    {
        printf("correct\n");
        score+=2;
    }
    else
    {
        printf("incorrect\n");
        score-=1;
    }
     printf("Q2.Do you like math?\n");
    printf ("1.yea.\n2.totally.\n3.4sure.\n4.all of the above.\n");
    scanf("%d",&ans);
    if (ans==4)
    {
        printf("correct\n");
        score+=2;
    }
    else
    {
        printf("incorrect\n");
        score-=1;
    }
     printf("Q3.is this quiz stupid?\n");
    printf ("1.YYYEEESSS\n2.Its cool\n3.The person who made this is a loser\n4.ITS THE BEST\n");
    scanf("%d",&ans);
    if (ans==3)
    {
        printf("correct\n");
        score+=2;
    }
    else
    {
        printf("incorrect\n");
        score-=1;
    }
    return score;
}
