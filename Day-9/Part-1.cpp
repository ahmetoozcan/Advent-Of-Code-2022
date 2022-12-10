#include <iostream>
#include <fstream>
#include <utility>
#include <string>
#include <deque>
#include <unordered_map>
#define COMMANDS_SIZE 2000

int main(int argc, char const* argv[])
{
    std::pair<int, int> headIndex, tailIndex;
    std::ifstream inputFile("Part-1-Input.txt");
    std::unordered_map<std::string, int> umap;
    std::string coordinate;
    headIndex.first = 1000, headIndex.second = 1000;
    tailIndex.first = 1000, tailIndex.second = 1000;
    int howManySteps;
    char direction;
    int result = 1;
    while (inputFile >> direction >> howManySteps)
    {
        if (direction == 'R') {
            for (int i = 0; i < howManySteps; i++) {
                headIndex.second++;
                if (abs(headIndex.second - tailIndex.second) > 1) {
                    tailIndex.first = headIndex.first;
                    tailIndex.second++;
                    coordinate = std::to_string(tailIndex.first) + std::to_string(tailIndex.second);
                    if (!(umap.count(coordinate)))
                        umap[coordinate] = 1;
                }
            }
        }
        else if (direction == 'U') {
            for (int i = 0; i < howManySteps; i++) {
                headIndex.first--;
                if (abs(headIndex.first - tailIndex.first) > 1) {
                    tailIndex.second = headIndex.second;
                    tailIndex.first--;
                    coordinate = std::to_string(tailIndex.first) + std::to_string(tailIndex.second);
                    if (!(umap.count(coordinate)))
                        umap[coordinate] = 1;
                }
            }
        }
        else if (direction == 'D') {
            for (int i = 0; i < howManySteps; i++) {
                headIndex.first++;
                if (abs(headIndex.first - tailIndex.first) > 1) {
                    tailIndex.second = headIndex.second;
                    tailIndex.first++;
                    coordinate = std::to_string(tailIndex.first) + std::to_string(tailIndex.second);
                    if (!(umap.count(coordinate)))
                        umap[coordinate] = 1;
                }
            }
        }
        else if (direction == 'L') {
            for (int i = 0; i < howManySteps; i++) {
                headIndex.second--;
                if (abs(headIndex.second - tailIndex.second) > 1) {
                    tailIndex.first = headIndex.first;
                    tailIndex.second--;
                    coordinate = std::to_string(tailIndex.first) + std::to_string(tailIndex.second);
                    if (!(umap.count(coordinate)))
                        umap[coordinate] = 1;
                }
            }

        }

    }
    for (auto key : umap)
        result++;
    std::cout << result;
    return 0;
}