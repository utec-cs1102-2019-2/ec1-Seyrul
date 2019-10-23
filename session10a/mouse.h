#ifndef SESSION10A_MOUSE_H
#define SESSION10A_MOUSE_H

#include<iostream>
#include<vector>

using namespace std;

class mouse {

private:
    vector<int>color;
    double precicison;
public:

    void set_color();
    void set_precision();

    ~mouse();

};


#endif //SESSION10A_MOUSE_H
