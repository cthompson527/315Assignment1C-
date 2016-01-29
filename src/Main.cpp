#include <iostream>
#include "Team.h"
#include "Parser.h"

bool sort(std::vector<Team>& teams);
void swap(std::vector<Team>& teams, int team1, int team2);

int main() {
    Parser parser("/Users/corythompson/Desktop/315/Input File/315Assignment1.txt");
    std::vector<Team> teams = parser.create_teams();
    sort(teams);
    std::cout << std::setw(13) << std::left << "Team Name" << std::setw(6) << std::right << "ASM" << std::setw(13) << "PSM\n";

    for (int i = 0; i < teams.size(); i++) {
        std::cout << teams[i] << std::endl;
    }
    return 0;
}

/**
 * implementing simple bubble sort to sort teams based on name
 */
bool sort(std::vector<Team>& teams)
{
    for (int i = 0; i < teams.size(); i++) {
        for (int j = i+1; j < teams.size(); j++) {
            if (strcmp(teams[i].getName().c_str(), teams[j].getName().c_str()) > 0) {
                swap(teams, i, j);
            } else if (strcmp(teams[i].getName().c_str(), teams[j].getName().c_str()) == 0) {
                std::cerr << "An error occurred" << std::endl;
                return false;
            }
        }
    }
    return true;
}

/**
 * swap the two teams in the vector
 */
void swap(std::vector<Team>& teams, int team1, int team2)
{
    Team temp = teams[team1];
    teams[team1] = teams[team2];
    teams[team2] = temp;
}