#include <iostream>

int main()
{

    int Score{};

    std::cout << "Please enter your score (0-100): ";
    std::cin >> Score;
    char Letter_Grade{};

    if (Score >= 0 && Score <= 100)
    {
        if (Score >= 90)
            Letter_Grade = 'A';
        else if (Score >= 80)
            Letter_Grade = 'B';
        else if (Score >= 70)
            Letter_Grade = 'C';
        else if (Score >= 60)
            Letter_Grade = 'D';
        else
            Letter_Grade = 'F';

        if (Letter_Grade == 'F')
            std::cout << "You FAILED to pass the class, try again loser.";
        else
            std::cout << "Congrats, you passed with a grade of " << Letter_Grade << "! Well done!";
    }
    else
    {
        std::cout << "Sorry " << Score << " is out of range." << std::endl;
    }

    return 0;
}