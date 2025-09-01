#pragma once
#include <Eigen/Dense>
#include <iostream>
class Quadrotor {
public:
    Eigen::Vector3d position;
    Eigen::Vector3d velocity;

    Quadrotor() {
        position.setZero();
        velocity.setZero();
    }

    void applyControl(const Eigen::Vector3d& accel, double dt) {
        velocity += accel * dt;
        position += velocity * dt;
    }

    void printState() const {
        std::cout << "Position: " << position.transpose()
                  << " | Velocity: " << velocity.transpose() << std::endl;
    }
};
