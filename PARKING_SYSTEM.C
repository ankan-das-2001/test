// #include <stdio.h>
// int main()
// {
//     int row, col;
//     // UPPER PART
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 1; col <= 17; col++)
//         {
//             if ((col >= 3 - row && col <= 6 + row) || (col >= 12 - row && col <= 15 + row))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     // LOWER PART
//     for (int row = 0; row < 9; row++)
//     {
//         for (int col = 0; col < 17; col++)
//         {
//             if (col >= row && col <= 16 - row)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int choice, condition = 1;
    float a, b, result;

    while (condition)
    {
        printf("\nEnter two numbers : \n");
        scanf("%f%f", &a, &b);

        printf("Choose 1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            result = a + b;
            printf("-------- Ans : %f --------", result);
            break;

        case 2:
            result = a - b;
            printf("-------- Ans : %f --------", result);
            break;

        case 3:
            result = a * b;
            printf("-------- Ans : %f --------", result);
            break;

        case 4:
            result = a / b;
            printf("-------- Ans : %f --------", result);
            break;

        default:
            printf("\nEnter a valid choice\n");
            break;
        }

        printf("\n\nDo you want to continue?(0,1)\n");
        scanf("%d", &condition);
    }
}