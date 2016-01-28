#include "Team.h"

std::string Team::getName() const {
    return name;
}

int Team::getASM() const {
    return _asm;
}

double Team::getPSM() const {
    return _psm;
}

Team::Team(std::string n, int _a, double _py, double _dpy, double _ry, double _dry, int _t, int _dt, int _pen, int _ret) {
    name = n;
    _asm = _a;
    _to = _t;
    _dto = _dt;
    _pendif = _pen;
    _rettd = _ret;
    _pya = _py;
    _dpya = _dpy;
    _rya = _ry;
    _drya = _dry;
    _psm = 3.17 * _rettd - 0.06 * _pendif + 61.67 * _pya + 26.44 * _rya - 2.77 * _to - 67.5 * _dpya - 22.79 * _drya + 3.49 * _dto;
}

Team::~Team() {

}

