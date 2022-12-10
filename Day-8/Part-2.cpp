#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>
#include <vector>
#include <sstream>
#define MAP_SIZE 99
using namespace std;

int map[MAP_SIZE][MAP_SIZE];

int main(int argc, char const* argv[])
{
    int visibleTrees = 0;
    ifstream inputFile("Part-2-Input.txt");
    std::string inputLine;
    bool isVisible = true, isChecked = false;

    int index2 = 0;
    while (getline(inputFile, inputLine)) {
        for (int i = 0; i < inputLine.length(); i++)
            map[index2][i] = int(inputLine[i]) - 48;
        index2++;
    }
    int max = INT_MIN;
    for (int i = 0; i < MAP_SIZE; i++)
    {
        int currentTree;
        for (int j = 0; j < MAP_SIZE; j++) {
            currentTree = map[i][j];
            int currentUp = 0, currentDown = 0, currentLeft = 0, currentRight = 0, currentStat = 0;
            for (int a = i - 1; a >= 0; a--) {
                if (currentTree <= map[a][j]) {
                    isVisible = false; currentUp++;  break;
                }
                else currentUp++;
            }
            for (int a = i + 1; a < MAP_SIZE; a++) {
                if (currentTree <= map[a][j]) { isVisible = false; currentDown++;break; }
                else currentDown++;
            }
            for (int a = j - 1; a >= 0; a--) {
                if (currentTree <= map[i][a]) {
                    isVisible = false; currentLeft++; break;
                }
                else currentLeft++;
            }
            for (int a = j + 1; a < MAP_SIZE; a++) {
                if (currentTree <= map[i][a]) { isVisible = false; currentRight++;break; }
                else currentRight++;
            }
            currentStat = (currentDown) * (currentUp) * (currentLeft) * (currentRight);
            if (currentStat > max)
                max = currentStat;
        }

    }
    std::cout << max;
    return 0;
}