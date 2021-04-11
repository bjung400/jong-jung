#include <stdio.h>
#include <stdlib.h>

int group(int card1, int card2, int card3, int card4);
int run(int card1, int card2, int card3, int card4);

int main(void)
{
    int blue_card[14] = {1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10,
    11, 12, 13};
    int red_card[14] = {1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10,
    11, 12, 13};
    int orange_card[14] = {1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10,
    11, 12, 13};
    int black_card[14] = {1, 2, 3 ,4 , 5, 6, 7, 8, 9, 10,
    11, 12, 13};

    int size = 14;
    int *user_card = malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++)
    {
        user_card[i] = (rand() % 14) + 1;
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d ", user_card[i]);
    }    
    group(13, 13, 3, 13);
    run(11, 12, 13, 15);
       
}
int group(int card1, int card2, int card3, int card4)
{
    int count = -7;
    int arr[4];
    arr[0] = card1;
    arr[1] = card2;
    arr[2] = card3;
    arr[3] = card4;
    
    for(int i = 0; i <= 3; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
    }
    if(count >= 3)
    {
        printf("%d\n", count);
        return 1;
    }
}
int run(int card1, int card2, int card3, int card4)
{
    int count = 0;
    int arr[4];
    arr[0] = card1;
    arr[1] = card2;
    arr[2] = card3;
    arr[3] = card4;

    for(int i = 0; i <= 3; i++)
    {
        if(arr[0] == arr[i])
        {
            count++;
            arr[0]++;
        }
    }
    if(count >= 3)
    {
        printf("%d\n", count);
        return 1;
    }
}