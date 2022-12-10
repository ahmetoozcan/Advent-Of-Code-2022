#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    std::ifstream inputFile("Part-2-Input.txt");
    unsigned int firstMaxSum = 0, secondMaxSum = 0, thirdMaxSum = 0, sum = 0;
    std::string inputLine;
    while (getline(inputFile, inputLine))
    {

        if (inputLine != "")
        {
            unsigned int stringToInt = std::stoi(inputLine);
            sum += stringToInt;
        }
        else if (inputLine == "")
        {
            if (firstMaxSum < sum)
            {
                int secondMaxSumTemp = secondMaxSum;
                secondMaxSum = firstMaxSum;
                thirdMaxSum = secondMaxSumTemp;
                firstMaxSum = sum;
            }
            else if (secondMaxSum < sum)
            {
                thirdMaxSum = secondMaxSum;
                secondMaxSum = sum;
            }
            else if (thirdMaxSum < sum)
            {
                thirdMaxSum = sum;
            }
            sum = 0;
        }
    }

    std::cout << firstMaxSum + secondMaxSum + thirdMaxSum;
    return 0;
}