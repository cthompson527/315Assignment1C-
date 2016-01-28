#pragma once

#ifndef STATPARSER_TEAM
#define STATPARSER_TEAM

#include <string>

class Team
{
private:
	std::string name;
	int _asm, 
		_to, 
		_dto, 
		_pendif, 
		_rettd;
	double _pya, 
		   _dpya, 
		   _rya, 
		   _drya, 
		   _psm;
public:
	Team();
	~Team();
};

#endif