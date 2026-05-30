//network port scanner simulation
//getting started

#include <iostream>

int main() {

    //looping through the ports

    for (int port = 1; port <= 5; port++) {

        //port 3 == vulnerability so alerting

        if (port == 3) {
            std::cout << "Port " << "is open (Vulnerable)" << std::endl;
        }

        else {
            std::cout << "Port " << port << " is closed." << std::endl;
        }
    }
    return 0;
}