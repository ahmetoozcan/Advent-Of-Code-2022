#include <iostream>
#include <string>
#include <fstream>
#include <set>
#include <utility>

void draw(int& x, int& cycle) {
    if (cycle == x || cycle == x + 1 || cycle == x + 2) {
        std::cout << "#";
    }
    else
        std::cout << ".";
    if (cycle % 40 == 0) {
        std::cout << std::endl;
        cycle = 0;
    }

}

int main(int argc, char const* argv[])
{
    int x = 1;
    int cycle = 1;
    int result = 0;
    std::set<std::pair<int, int>> set;

    std::ifstream inputFile("input.txt");
    std::string inputLine;
    while (getline(inputFile, inputLine)) {
        if (inputLine[0] == 'n') {
            draw(x, cycle);
            cycle++;
        }
        else {
            std::string num;
            for (int i = 5; i < inputLine.length(); i++) {
                num.push_back(inputLine[i]);
            }
            draw(x, cycle);
            cycle++;
            draw(x, cycle);
            cycle++;
            x += stoi(num);
        }
    }



    return 0;
}