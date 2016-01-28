#include "Team.h"

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
}

Team::~Team() {

}