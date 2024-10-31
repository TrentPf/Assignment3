#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* getResult(char* playerOne, char* playerTwo);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsCppUnitTests
{
	TEST_CLASS(RockPaperScissorsCppUnitTests)
	{
	public:
		
		TEST_METHOD(CheckPlayerOneWin)
		{
			//This tests to see if player one wins if they played Rock and player two played paper

			char* player1 = "Paper";
			char* player2 = "Rock";

			char* result; 
			result = getResult(player1, player2);

			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(CheckPlayerTwoWin)
		{

			//This tests to see if player two wins if they played Paper and player one played Rock

			char* player1 = "Rock";
			char* player2 = "Paper";

			char* result;
			result = getResult(player1, player2);

			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(CheckForDraw)
		{

			//This tests to see if 'Draw' is returned when player one and player two both select scissors

			char* player2 = "Scissors";
			char* player1 = "Scissors";

			char* result;
			result = getResult(player1, player2);

			Assert::AreEqual("Draw", result);
		}

		TEST_METHOD(CheckForInvalid)
		{

			//This tests to if 'Invalid' is returned when one of player one or two selects an invalid input

			char* player2 = "sdfasdf";
			char* player1 = "Scissors";

			char* result;
			result = getResult(player1, player2);

			Assert::AreEqual("Invalid", result);
		}
	};
}
