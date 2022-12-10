#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    std::ifstream inputFile("Part-2-Input.txt");
    string inputLine;
    int count = 0;

    while (getline(inputFile, inputLine))
    {
        string firstElfFirst, firstElfSecond, secondElfFirst, secondElfSecond;

        for (int i = 0; i < inputLine.length(); i++)
        {
            while (inputLine[i] != '-')
                firstElfFirst.push_back(inputLine[i]), i++;
            i++;
            while (inputLine[i] != ',')
                firstElfSecond.push_back(inputLine[i]), i++;
            i++;
            while (inputLine[i] != '-')
                secondElfFirst.push_back(inputLine[i]), i++;
            i++;
            while (inputLine[i] != '\0')
                secondElfSecond.push_back(inputLine[i]), i++;
            break;
        }

        if (stoi(firstElfFirst) <= stoi(secondElfFirst) && stoi(secondElfFirst) <= stoi(firstElfSecond))
            count++;
        else if (stoi(secondElfFirst) <= stoi(firstElfFirst) && stoi(firstElfFirst) <= stoi(secondElfSecond))
            count++;
    }

    std::cout << count;

    return 0;
}