#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream inputFile("Part-1-Input.txt");
    string firstLine, secondLine, thirdLine;
    int sum = 0;

    while (inputFile >> firstLine >> secondLine >> thirdLine)
    {

        bool check = false;

        for (int i = 0; i < firstLine.length(); i++)
        {
            for (int j = 0; j < secondLine.length(); j++)
            {
                for (int k = 0; k < thirdLine.length(); k++)
                {
                    if (firstLine[i] == secondLine[j] && firstLine[i] == thirdLine[k])
                    {
                        if (isupper(firstLine[i]))
                        {
                            sum += int(firstLine[i] - 38);
                        }
                        else
                        {
                            sum += int(firstLine[i]) - 96;
                        }
                        check = true;
                        break;
                    }
                }
                if (check == true)
                    break;
            }
            if (check == true)
                break;
        }
    }

    std::cout << sum;
    return 0;
}