/*************************
 * By Damian Demasi
 * Date: 17/04/2021
 * Requirements:
 *  Write a program that plays Tic Tac Toe. The game is played on a 3x3 grid, by 2 players who take turns.
 *  Use three functions:
 *      - Check to see if a player won or the game is draw.
 *      - Redraw the board for each player turn.
 *      - Set a char array with a selection and check for an invalid selection.
 *************************/

#include <stdio.h>

// Global variables
int boardArray[3][3] = {0};
int activePlayer = 0;

// Function declarations
int drawBoard();

// Function definitions
int main()
{
    int selection = 0;
    
    // Present board and ask for selection
    selection = drawBoard();

    // Check if selection is valid


    return 0;
}

int drawBoard()
{
    int selection = 0;

    if (activePlayer == 0)
    {
        activePlayer = 1;
    }
    else if (activePlayer == 1)
    {
        activePlayer = 2;
    }
    else
    {
        activePlayer = 1;
    }
    
    printf("\n\t  _____ _        _____            _____           ");
    printf("\n\t |_   _(_) ___  |_   _|_ _  ___  |_   _|__   ___  ");
    printf("\n\t   | | | |/ __|   | |/ _` |/ __|   | |/ _ \\ / _ \\ ");
    printf("\n\t   | | | | (__    | | (_| | (__    | | (_) |  __/ ");
    printf("\n\t   |_| |_|\\___|   |_|\\__,_|\\___|   |_|\\___/ \\___| ");
    printf("\n\n\tPlayer 1 is playing (X), Player 2 is playing (O)\n");
    printf("\n\t\t\t     |     |     ");
    printf("\n\t\t\t  1  |  2  |  3  ");
    printf("\n\t\t\t_____|_____|_____");
    printf("\n\t\t\t     |     |     ");
    printf("\n\t\t\t  4  |  5  |  6  ");
    printf("\n\t\t\t_____|_____|_____");
    printf("\n\t\t\t     |     |     ");
    printf("\n\t\t\t  7  |  8  |  9  ");
    printf("\n\t\t\t     |     |     ");
    printf("\n\n\tPrlayer %d - select a position:", activePlayer);
    scanf("%d", &selection);

    return selection;
}

void checkValid(int selection)
{
    switch (selection)
    {
        case 1:
        case 2:
        case 3:
            if(boardArray[0][selection - 1] == 0)
            {
                (activePlayer == 1) ? boardArray[0][selection - 1] = 1 : (boardArray[0][selection - 1] = 2);
            }
            else
            {
                invalidFlag = 1;
            }
            break;
        
        case 4:
        case 5:
        case 6:
            if(boardArray[1][selection - 1] == 0)
            {
                (activePlayer == 1) ? boardArray[1][selection - 1] = 1 : (boardArray[1][selection - 1] = 2);
            }
            else
            {
                invalidFlag = 1;
            }
            break;
        
        case 7:
        case 8:
        case 9:
            if(boardArray[2][selection - 1] == 0)
            {
                (activePlayer == 1) ? boardArray[2][selection - 1] = 1 : (boardArray[2][selection - 1] = 2);
            }
            else
            {
                invalidFlag = 1;
            }
            break;

        default:
            invalidFlag = 1;
            break;
    }
}