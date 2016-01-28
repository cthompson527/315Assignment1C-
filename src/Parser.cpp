#include "Parser.h"


Parser::Parser(std::string f)
{
    file.open(f.c_str(), std::ifstream::in);
    if (!file.is_open()) {
        exit(1);
    }
}


Parser::~Parser()
{
    file.close();
}

std::vector<Team> Parser::create_teams() {
    std::vector<Team> teams;
    std::string input;
    while (!file.eof()) {         // TODO: eof isn't set until +1 of desired eof. *Creates 33 teams*
        teams.push_back(create_team());
        std::string clear;
        std::getline(file, clear);
    }
    return teams;
}

Team Parser::create_team() {
    std::string name;
    int _asm, _to, _dto, _pendif, _rettd;
    double _pya, _dpya, _rya, _drya;
    file >> name >> _asm >> _pya >> _dpya >> _rya >> _drya >> _to >> _dto >> _pendif >> _rettd;
    return Team(name, _asm, _pya, _dpya, _rya, _drya, _to, _dto, _pendif, _rettd);
}
