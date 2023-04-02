// Online C compiler to run C program online
#include <stdio.h>
//if specific keys are being pressed, return non-0 or 0
//change keyboard presses to dials

int gameOver;
int playerOneScore, playerTwoScore = 0;

//Setup when game is loaded in
void setup() {
    gameOver = 0;
    printf("setup function is called \n");
    

}

//First function: create boundary for the game to be played
void gameBoundaries() {
    printf("gameBoundaries function is called! \n");
    
}


//Second function:  Movement of paddles -> Input()
void input() {
    printf("input function is called");
}

//Third function: Movement of ball () -> 
void ballMovement() {
    //If ball is moving, will = 1, = 0 if not
    int ballSpeed = 0;
    int ballLocation;
    
    //Bounce off all walls/boundaries
    //if ()
 
    //Bounce off paddle
 
 
 //if ball reaches either side of screen, add point to one of the players 
    if (ballSpeed = 0) {
        
    }
 //Ball will start on paddle and be thrown in when switch is flicked and ball movement = 0;
}
 
//Fourth: Score management
void playerScores() {
    //Haven't made it appear on the monitor, just added arithmetic
    printf("\n %d", playerOneScore);
    if (playerOneScore < 7) {
        playerOneScore++;
        printf(" \n %d \n", playerOneScore);
    } else {
        gameOver = 1;
    }
}

int main() {
    // Write C code here
    printf("Hello world \n");

    //Make boundaries for the game
    setup();
    
    //keep program going until a player wins
    while (gameOver == 0) {
        //call all of the functions
        gameBoundaries();
        input();
        playerScores();
        
    }
    return 0;
}
