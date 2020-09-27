
// Name: Aliyah Gantt
// Course: CIS 006 Intro to programming
// CRN: 42981
// Date: 9/14/2020
// Assignment: BlackJack



#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;


int main(){
// Player and dealer's decks
srand (time(NULL));
int playerCard1, playerCard2, playerCard3, playerTotal;
int dealerCard1, dealerCard2, dealerCard3, dealerTotal;


// Determines wether the game is currently running
char playing = 0;

// Determines if the program should add a new card to the player's deck
char newCard = 0;


// ** START OF THE GAME **


do{
  cout << "\nWelcome to Blackjack!" << endl;
  playerCard1 = rand() % 10 + 1;
  playerCard2 = rand() % 10 + 1;
  playerTotal = playerCard1 + playerCard2;
  cout << "Dealer has a... " << dealerTotal << endl;
  cout << "Your first card is: " << playerCard1 << ", " << playerCard2 << endl;
  cout << "Total: " << playerTotal << endl;


  cout << "Do you want another card? (y/n)" << endl;
  cin >> newCard;

while(newCard == 'y'){
          playerCard3 = rand() % 10 + 1;
          playerTotal = playerCard1 + playerCard2 + playerCard3;

          if ( playerTotal > 21 )
           {cout << "Bust." << endl;}
           if ( playerTotal  == 21)
           {cout  << "Win" << endl;}


         // Dealer's strategy is to add another card if their total is less than 17
          dealerCard1 = rand() % 10 + 1;
          dealerCard2 = rand() % 10 + 1;
          dealerTotal = dealerCard1 + dealerCard2;
          if(dealerTotal < 17)
          {
            dealerCard3 = rand() % 10 + 1;
            dealerTotal = dealerCard1 + dealerCard2 + dealerCard3;
          }
        if (playerTotal > 21)
        {
          // Player bust
          cout << playerTotal << endl;
          cout << "Bust." << endl;
          break;
         }
         if (playerTotal <= 21 && playerTotal > dealerTotal)
         {
          //Player won
          cout << playerTotal << endl;
          cout << "Won." << endl;
          break;
         }
         if (playerTotal >= 21 && playerTotal == dealerTotal)
         {
           //Player tied
           cout << playerTotal << endl;
           cout << "Push." << endl;
           break;
         }
         if (playerTotal >= 21 && playerTotal < dealerTotal)
         {
            //Player Lost
            cout << playerTotal << endl;
            cout << "Lose." << endl;
            break;
          }

}

while(newCard == 'n'){
   // Dealer's strategy is to add another card if their total is less than 17
    dealerCard1 = rand() % 10 + 1;
    dealerCard2 = rand() % 10 + 1;
    dealerTotal = dealerCard1 + dealerCard2;
    if(dealerTotal < 17)
    {
      dealerCard3 = rand() % 10 + 1;
      dealerTotal = dealerCard1 + dealerCard2 + dealerCard3;
    }

    if (playerTotal > 21)
    {
      // Player bust
      cout << playerTotal << endl;
      cout << "Bust." << endl;
      break;
     }
     if (playerTotal <= 21 && playerTotal > dealerTotal)
     {
      //Player won
      cout << playerTotal << endl;
      cout << "Won." << endl;
      break;
     }
     if (playerTotal >= 21 && playerTotal == dealerTotal)
     {
       //Player tied
       cout << playerTotal << endl;
       cout << "Push." << endl;
       break;
     }
     if (playerTotal >= 21 && playerTotal < dealerTotal)
     {
        //Player Lost
        cout << playerTotal << endl;
        cout << "Lose." << endl;
        break;
      }
}



       cout << "Would you like to play again? (y/n)" << endl;
       cin >> playing;


}while(playing == 'y');



return 0;
}
