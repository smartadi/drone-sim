#include <iostream>
#include <Eigen/Dense>
#include "quad.hpp"

int main() {
    Quadrotor drone;
    double dt = 0.01;  // time step
    Eigen::Vector3d accel(0.0, 0.0, 9.8); // simple upward acceleration

    std::cout << "Simulating quadrotor for 1 second...\n";
    for(int i = 0; i < 100; ++i) {
        drone.applyControl(accel, dt);
        drone.printState();
    }

    return 0;
}
