#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    std::ifstream inputFile("Part-1-Input.txt");
    unsigned int maxSum = 0, sum = 0;
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
            if (maxSum < sum)
                maxSum = sum;
            sum = 0;
        }
    }

    std::cout << maxSum;
    return 0;
}