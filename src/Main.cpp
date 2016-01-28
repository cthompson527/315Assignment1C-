#include "Team.h"
#include "Parser.h"

int main() {
    Parser parser("/Users/corythompson/Desktop/315/Input File/315Assignment1.txt");
    std::vector<Team> teams = parser.create_teams();
    return 0;
}