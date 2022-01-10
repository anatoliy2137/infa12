#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {

    for (int i=15; i<=42; i++) {
        if(i%3==0) {
            cout<<(i);
            cout<<("\n");
        }
    }
    cout<<endl;

    system("PAUSE");
 return EXIT_SUCCESS;
}
