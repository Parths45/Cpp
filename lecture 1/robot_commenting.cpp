#include <iostream>

int main(){

    // declare and initilize variables
    double speed = 0.5; // speed of robots in m/s
    double time =10.0; // time travled in seconds

    /*
    Calculate the distance traveled by the robot
    distance =speed*time
    */
    double distance = speed * time; // distance traveled by the robot in meters

    std::cout << "The robot traveled " << distance << " meters." << std::endl;

    return 0;
}