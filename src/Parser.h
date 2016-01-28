#pragma once

#ifndef STATPARSER_PARSER
#define STATPARSER_PARSER

#include <string>
#include <fstream>
#include <vector>
#include "Team.h"

class Parser
{
private:
    std::ifstream file;
    Team create_team();

public:
    std::vector<Team> create_teams();
    Parser(std::string f);
    ~Parser();
};

#endif

