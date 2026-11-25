#include <stdio.h>
int main()
{ 
    int age;
    int choice;
    int Ram = 0;
    int Shyam = 0;
    int sita = 0;
    int voters;
    printf("Enter number of voters: ");
    scanf("%d", &voters);
    for (int i = 1; i <= voters; i++)
     {
        printf("Voter %d:\n", i);
        printf("Enter your age: ");
        scanf("%d", &age);
        if (age < 18)
        {
            printf("Sorry! You are not eligible to vote.\n");
        } 
        else {
            printf("\nCandidates:\n");
            printf("1. Ram\n");
            printf("2. Shyam\n");
            printf("3. Sita\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                Ram++;
                printf("Vote successfully recorded for Ram.\n");
            }
            else if (choice == 2) {
                Shyam++;
                printf("Vote successfully recorded for Shyam.\n");
            }
            else if (choice == 3) {
                sita++;
                printf("Vote successfully recorded for Sita.\n");
            }
            else {
                printf("Invalid vote!\n");
            }
        }
    }
    printf("\n===== VOTING RESULT =====\n");
    printf("Ram: %d votes\n", Ram);
    printf("Shyam: %d votes\n", Shyam);
    printf("Sita: %d votes\n", sita);

    if (Ram > Shyam && Ram > sita) {
        printf("Winner: Ram\n");
    }
    else if (Shyam > Ram && Shyam > sita) {
        printf("Winner: Shyam\n");
    }
    else if (sita > Ram && sita > Shyam) {
        printf("Winner: Sita\n");
    }
    else {
        printf("There is a tie!\n");
    }
    return 0;
}