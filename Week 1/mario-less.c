#include <stdio.h>

int main(void)
{
    int height, row, col, space;

    do
    {
        printf("Enter height here: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        for (col = 0; col <= row; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}