#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsCppUnitTests
{
	TEST_CLASS(RockPaperScissorsCppUnitTests)
	{
	public:
		
		TEST_METHOD(GetCharArrays)
		{
			//This tests to see if two char arrays are accepted as input

			char player1[9] = "Rock";
			char player2[9] = "Paper";

			char inputPlayer1[9] = "";
			char inputPlayer2[9] = "";


			int validity = 0;

			if (strncmp(player1, inputPlayer1, sizeof(player1)) == 0) {
				if (strncmp(player2, inputPlayer2, sizeof(player2)) == 0) {
					validity = 1;
				}
			}

			Assert::AreEqual(validity, 1);
		}
	};
}
