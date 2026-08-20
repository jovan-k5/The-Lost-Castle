#include <stdio.h>
#include <string.h>
#include <ctype.h>

void show_inventory(int torch, int seal, int crown);

int main(void)
{
    char again = 'Y';

    while (toupper(again) == 'Y')
    {
        int torch = 0;
        int seal = 0;
        int crown = 0;
        int game_over = 0;

        printf("\n========================================\n");
        printf("            THE LOST CASTLE\n");
        printf("========================================\n");

        printf("\nYou enter an abandoned castle searching for the King's lost crown.\n");
        printf("The massive doors close behind you.\n");

        // Castle Entrance
        printf("\n--- CASTLE ENTRANCE ---\n");
        printf("You see a courtyard ahead.\n");
        printf("1. Enter the courtyard\n");
        printf("2. Leave the castle\n");

        int choice;
        printf("> ");
        scanf("%d", &choice);

        if (choice == 2)
        {
            printf("\nYou leave the castle without the crown.\n");
            printf("GAME OVER.\n");
            game_over = 1;
        }

        if (!game_over)
        {
            // Courtyard
            printf("\n--- COURTYARD ---\n");
            printf("The courtyard is dark and covered in vines.\n");
            printf("You notice an old torch lying near a statue.\n");
            printf("1. Take the torch\n");
            printf("2. Continue without it\n");

            printf("> ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                torch = 1;
                printf("\nYou picked up the torch.\n");
            }
            else
            {
                printf("\nYou leave the torch behind.\n");
            }

            show_inventory(torch, seal, crown);

            // Main Hall
            printf("\n--- MAIN HALL ---\n");

            if (!torch)
            {
                printf("The hall is almost completely dark.\n");
                printf("You cannot see where you are going.\n");
                printf("GAME OVER.\n");
                game_over = 1;
            }
            else
            {
                printf("Your torch lights the enormous hall.\n");
                printf("You see doors leading to the library and dungeon.\n");

                printf("\n1. Enter the library\n");
                printf("2. Enter the dungeon\n");
                printf("> ");
                scanf("%d", &choice);

                if (choice == 2)
                {
                    printf("\nThe dungeon door is locked.\n");
                    printf("You need something to open it.\n");
                    printf("You return to the main hall.\n");
                    choice = 1;
                }

                if (choice == 1)
                {
                    // Library
                    printf("\n--- LIBRARY ---\n");
                    printf("Dusty books cover the walls.\n");
                    printf("A strange inscription is written on a desk:\n");
                    printf("\n\"I have keys but open no locks.\n");
                    printf("I have space but no room.\n");
                    printf("You can enter, but cannot go inside.\"\n");

                    printf("\nWhat am I?\n");
                    printf("1. A keyboard\n");
                    printf("2. A map\n");
                    printf("3. A door\n");
                    printf("> ");
                    scanf("%d", &choice);

                    if (choice == 1)
                    {
                        printf("\nCorrect! The inscription reveals a hidden compartment.\n");
                        seal = 1;
                        printf("You found the King's Keeper's Seal!\n");
                    }
                    else
                    {
                        printf("\nWrong answer.\n");
                        printf("The hidden compartment remains locked.\n");
                        printf("GAME OVER.\n");
                        game_over = 1;
                    }
                }
            }
        }

        if (!game_over)
        {
            // Dungeon
            printf("\n--- DUNGEON ---\n");
            printf("You enter the dark dungeon.\n");
            printf("At the end of the hallway is a large door.\n");

            if (seal)
            {
                printf("The Keeper's Seal fits perfectly into the door.\n");
                printf("The door opens.\n");
            }
            else
            {
                printf("You do not have the Keeper's Seal.\n");
                printf("The door remains locked.\n");
                printf("GAME OVER.\n");
                game_over = 1;
            }
        }

        if (!game_over)
        {
            // Treasure Room
            printf("\n--- TREASURE ROOM ---\n");
            printf("Gold and jewels surround you.\n");
            printf("In the center of the room is a pedestal.\n");
            printf("A final puzzle protects the crown.\n");

            printf("\nThe inscription reads:\n");
            printf("\"What gets wetter the more it dries?\"\n");

            printf("\n1. A towel\n");
            printf("2. A sponge\n");
            printf("3. A cloud\n");
            printf("> ");
            scanf("%d", &choice);

            if (choice == 1)
            {
                printf("\nCorrect!\n");
                crown = 1;
                printf("The crown is yours!\n");
            }
            else
            {
                printf("\nWrong answer.\n");
                printf("The treasure room locks itself.\n");
                printf("GAME OVER.\n");
                game_over = 1;
            }
        }

        if (!game_over && crown)
        {
            // Final Exit
            printf("\n--- FINAL EXIT ---\n");
            printf("You return to the castle entrance with the crown.\n");
            printf("The castle doors slowly open.\n");

            printf("\n========================================\n");
            printf("              YOU WIN!\n");
            printf("========================================\n");
            printf("You recovered the King's lost crown.\n");
        }

        printf("\nPlay again? (Y/N): ");
        scanf(" %c", &again);
        again = toupper(again);
    }

    printf("\nThanks for playing!\n");

    return 0;
}


void show_inventory(int torch, int seal, int crown)
{
    printf("\n--- INVENTORY ---\n");

    if (torch)
        printf("- Torch\n");

    if (seal)
        printf("- Keeper's Seal\n");

    if (crown)
        printf("- Crown\n");

    if (!torch && !seal && !crown)
        printf("- Empty\n");
}
