/* Algorithm Challenge & Problem Solving
 * 11 - Palindrome Number Checker
 *
 * This program reads a positive integer from the user and determines
 * whether the number is a Palindrome.

 *
 * The program works by:
 *   1. Reversing the given number.
 *   2. Comparing the original number with its reversed form.
 */

#include <iostream>
using namespace std;

// Reads a positive integer from the user with input validation.
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;

        // Ensuring the number is positive.
        if (Number <= 0)
            cout << "Please enter a positive number.\n";

    } while (Number <= 0);

    return Number;
}

// Reverses the digits of a number.
// Example: 1234 → 4321
int ReverseNumber(int Number)
{
    int Remainder = 0, ReversedNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;                          // Extract last digit
        Number /= 10;                                     // Remove last digit
        ReversedNumber = ReversedNumber * 10 + Remainder; // Build reversed number
    }

    return ReversedNumber;
}

// Checks if a number is a palindrome.
// Returns true if the number equals its reversed form.
bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}

int main()
{
    int UserNumber = ReadPositiveNumber("Enter a Positive Number:");

    if (IsPalindromeNumber(UserNumber))
        cout << "\nYes, it is a Palindrome Number.\n";
    else
        cout << "\nNo, it is NOT a Palindrome Number.\n";

    return 0;
}
