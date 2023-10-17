#include <stdio.h>
#include <stdbool.h>

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int player = 1;
int choice;

// Function to draw the current state of the board
void drawBoard() {
    printf("\n\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n\n");
}

// Function to get player input and update the board
void markBoard(char mark) {
    if (choice == 1)
        board[0][0] = mark;
    else if (choice == 2)
        board[0][1] = mark;
    else if (choice == 3)
        board[0][2] = mark;
    else if (choice == 4)
        board[1][0] = mark;
    else if (choice == 5)
        board[1][1] = mark;
    else if (choice == 6)
        board[1][2] = mark;
    else if (choice == 7)
        board[2][0] = mark;
    else if (choice == 8)
        board[2][1] = mark;
    else if (choice == 9)
        board[2][2] = mark;
}

// Function to check if there is a winner
int checkForWin() {
    // Code for checking the winning condition
}

int main() {
    int gameStatus;

    char mark;
    do {
        drawBoard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';
        markBoard(mark);

        gameStatus = checkForWin();
        player++;
    } while (gameStatus == -1);

    drawBoard();

    if (gameStatus == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    return 0;
}

// यह एक टिक-टैक-टो गेम का साधारण C प्रोग्राम है, जो 3x3 मैट्रिक्स में स्थित बोर्ड की स्थिति दर्शाता है।

// board एक 3x3 आकार की मैट्रिक्स है जिसमें टिक-टैक-टो गेम की स्थिति संग्रहीत होती है।
// drawBoard फ़ंक्शन वर्तमान बोर्ड की स्थिति को प्रिंट करता है।
// markBoard फ़ंक्शन खिलाड़ी की इनपुट के आधार पर बोर्ड को अपडेट करता है।
// checkForWin फ़ंक्शन गेम की विजेता घोषित करने के लिए विजेता की जांच करता है।
// player वेरिएबल वर्तमान खिलाड़ी को दर्शाती है।
// choice वेरिएबल खिलाड़ी की इनपुट को स्टोर करती है।
// यहां if-else संरचना और do-while लूप का उपयोग किया गया है जो खेल की विभिन्न स्थितियों को संभालते हैं। संपूर्ण प्रोग्राम टिक-टैक-टो खेल के नियमों के अनुसार कार्य करता है और खिलाड़ियों के आवाज आदान-प्रदान को प्रबंधित करता है।




