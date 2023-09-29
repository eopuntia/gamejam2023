#include <iostream>
#include <stdlib.h>
#include <string>

class scene {
    public:
        int id;             // unique id for each scene
        string name;        // name of the scene
        string desc;        // description of the scene
        scene adj[];        // 

        //constructor
        scene(int i, string n, string d, scene a[]) {
            id = i;
            name = n;
            desc = d;
            adj = a;
        }

        // when character looks around, gives a description of the scene
        string look() {
            return desc;
        }
}