#pragma once

inline int global_score = 100;
//static var
inline int& var(){
    static int t=0;
    return t;
}
