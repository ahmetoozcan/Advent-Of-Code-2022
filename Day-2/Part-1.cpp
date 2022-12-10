#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream inputFile("Part-1-Input.txt");
    string elves, me;
    int myPoints = 0;

    while (inputFile >> elves >> me)
    {
        if (elves == "A")
        {
            if (me == "X")
            {
                myPoints += 1 + 3;
            }
            if (me == "Y")
            {
                myPoints += 2 + 6;
            }
            if (me == "Z")
            {
                myPoints += 3 + 0;
            }
        }
        if (elves == "B")
        {
            if (me == "X")
            {
                myPoints += 1 + 0;
            }
            if (me == "Y")
            {
                myPoints += 2 + 3;
            }
            if (me == "Z")
            {
                myPoints += 3 + 6;
            }
        }
        if (elves == "C")
        {
            if (me == "X")
            {
                myPoints += 1 + 6;
            }
            if (me == "Y")
            {
                myPoints += 2 + 0;
            }
            if (me == "Z")
            {
                myPoints += 3 + 3;
            }
        }
    }
    std::cout << myPoints;
    return 0;
}