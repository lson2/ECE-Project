// Online C compiler to run C program online
#include <stdio.h>
//#include <stdlib.h>
//#include <unistd.h> i think this is for the sleep() function
//if specific keys are being pressed, return non-0 or 0
//change keyboard presses to dials


int gameOver;
int playerOneScore, playerTwoScore;
int height = 20, width = 20, x= 10, y = 10;
int paddleOneX, paddleOneY, paddleTwoX, paddleTwoY;
int paddleLength = 6;
int leftWall, rightWall;


//1st function: create boundary for the game to be played
void gameBoundaries() {
    printf("gameBoundaries function is called! \n");

    //prints boundaries by using #'s'
    //Will replace this code to setting the bits on the monitor should be simpler as we don't have to individually print out each line using loops, just set to the outside bits
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1) {
                printf("#");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
        //Starting location for the paddles
        for (int j = 0; j < paddleLength; j++) {
            //Just set the corresponding bits of the monitor to turn on, make the length of the paddle to be 6ish pixels?
            printf("|| \n");
    }
  
    // Print the score after the
    // game ends
    printf("score1 = %d", playerOneScore);
    printf("score2 = %d", playerTwoScore);
    printf("\n");
}



//2nd Function: Setup when game is loaded in
void setup() {
    printf("setup function is called \n");
    
    gameOver = 0;
    playerOneScore, playerTwoScore = 0;
    paddleOneY= 1;
    paddleTwoY = 19;
    
}



//3rd function:  Movement of paddles -> Input()
void input() {
    printf("input function is called");
    sleep(0.1);
    //if (dial 1 is turned left, move paddle 1 upwards)
     //else {
        //move paddle 1 downwards
    
    //if (dial 2 is turned left -> move paddle 2 upwards)
    //else {
        //move paddle 2 downwards
}



//4th function: Movement of ball () -> 
void ballMovement() {
    printf("\nballMovement function is called \n");
    //If ball is moving, will = 1, = 0 if not
    int ballSpeed = 0;
    int ballLocation;
    
    //Bounce off all walls/boundaries
    //If ball location = a wall bit, change directory to bounce back
    //if ()
 
    //Bounce off paddle
    //If ball location = a paddle bits, change directory to bounce back
 
    //if ball reaches the wall behind the paddle, add point to corresponding player
    if (ballLocation = leftWall || rightWall) {
        ballSpeed =
    }
    
    //Ball will start on paddle and be thrown in when switch is flicked and ball movement = 0;
}
 
 
 
//5th function: Score management
void playerScores() {
    //Haven't made it appear on the monitor, just added arithmetic
    printf("\nplayerScores function is called");
    
    //If either players get to 7 points, end program. Will add to score corresponding to the player that won the point
    if (playerOneScore < 7 && playerTwoScore < 7) {
        //if (ball hits left side of wall, award point to playerOne) {
                //playerOneScore++;
        //} else { 
                //give point to playerTwo
                //playerTwoScore++;

        playerOneScore++;
            printf("\n score1 = %d  ", playerOneScore);
            printf("score2 = %d", playerTwoScore);
            printf("\n");
    } else {
        gameOver = 1;
    }
}



//Main function, calls the functions as long as game is going 
int main() {
    printf("MAIN PROGRAM HAS STARTED \n \n");

    //Make boundaries for the game
    gameBoundaries();
    //setup function resets
    setup();
    
    //keep program going until a player wins
    while (gameOver == 0) {
        //call all of the functions

        ballMovement();
        input();
        playerScores();
    } 
    
    if (gameOver == 1) {
        //Show end screen and quit program after a few seconds
        printf(" \n\nGame Completed! Closing screen...");
    }
    
    return 0;
}
