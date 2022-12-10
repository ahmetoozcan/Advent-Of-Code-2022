#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream inputFile("Part-1-Input.txt");
    string inputLine;
    int sum = 0;

    while (getline(inputFile, inputLine))
    {

        bool check = false;
        string firstHalf, secondHalf;

        for (int i = 0; i < inputLine.length(); i++)
            if (i < inputLine.length() / 2)
                firstHalf.push_back(inputLine[i]);
            else
                secondHalf.push_back(inputLine[i]);

        for (int i = 0; i < firstHalf.length(); i++)
        {
            for (int j = 0; j < secondHalf.length(); j++)
            {
                if (firstHalf[i] == secondHalf[j])
                {
                    if (isupper(firstHalf[i]))
                    {
                        sum += int(firstHalf[i] - 38);
                    }
                    else
                    {
                        sum += int(firstHalf[i]) - 96;
                    }
                    check = true;
                    break;
                }
            }
            if (check == true)
                break;
        }
    }

    std::cout << sum;
    return 0;
}