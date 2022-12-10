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
    ifstream inputFile("Part-1-Input.txt");
    std::string inputLine;
    bool isVisible = true, isChecked = false;

    int index2 = 0;
    while (getline(inputFile, inputLine)) {
        for (int i = 0; i < inputLine.length(); i++)
            map[index2][i] = int(inputLine[i]) - 48;
        index2++;
    }

    for (int i = 0; i < MAP_SIZE; i++)
    {
        int currentTree;
        for (int j = 0; j < MAP_SIZE; j++) {
            currentTree = map[i][j];
            isChecked = false;
            isVisible = true;
            for (int a = i - 1; a >= 0; a--) {
                if (currentTree <= map[a][j]) { isVisible = false; break; }
            }
            if (isVisible == true)
                visibleTrees++, isChecked = true;
            if (isVisible == false) {
                isVisible = true;
                for (int a = i + 1; a < MAP_SIZE; a++) {
                    if (currentTree <= map[a][j]) { isVisible = false; break; }
                }
            }
            if (isVisible == true && isChecked == false)
                visibleTrees++, isChecked = true;
            if (isVisible == false) {
                isVisible = true;
                for (int a = j - 1; a >= 0; a--) {
                    if (currentTree <= map[i][a]) { isVisible = false; break; }
                }
            }
            if (isVisible == true && isChecked == false)
                visibleTrees++, isChecked = true;
            if (isVisible == false) {
                isVisible = true;
                for (int a = j + 1; a < MAP_SIZE; a++) {
                    if (currentTree <= map[i][a]) { isVisible = false; break; }
                }
            }
            if (isVisible == true && isChecked == false)
                visibleTrees++, isChecked = true;
        }

    }
    std::cout << visibleTrees; // min 392
    return 0;
}