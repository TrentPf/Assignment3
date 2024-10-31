#include <stdio.h>
#include <stdbool.h>

#include "main.h"

void main() {


}


char* getResult(char* playerOneInput, char* playerTwoInput) {
	char* result = "Invalid";

	if (playerOneInput == playerTwoInput) {
		result = "Draw";
		
	}
	else {

		if (playerOneInput == "Rock") {
			if (playerTwoInput == "Paper") {
				result = "Player2";				
			}
			else if (playerTwoInput == "Scissors"){
				result = "Player1";
			}
			
			
		} else if (playerOneInput == "Paper") {
			if (playerTwoInput == "Scissors") {
				result = "Player2";
			}
			else if (playerTwoInput == "Rock"){
				result = "Player1";
			}

		} else {
			if (playerTwoInput == "Rock") {
				result = "Player2";
			}
			else if (playerTwoInput == "Paper"){
				result = "Player1";
			}
		}
	}
	return result;
}

