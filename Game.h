#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

// Forward declarations of classes
class Player;
class Vault;
class Weapon;
class PhysicsEngine;

// 3D Graphics Engine class definition
class GraphicsEngine {
public:
    void initialize();
    void renderScene();
};

// Class for Player Management
class Player {
public:
    std::string name;
    int health;
    std::vector<Weapon> weapons;
    void manageInventory();
};

// Vault System class definition inspired by Fallout 4
class Vault {
public:
    int id;
    std::vector<Player> residents;
    void manageVault();
};

// Class for Weapons and Gun Modifications
class Weapon {
public:
    std::string type;
    std::vector<std::string> modifications;
    void customizeWeapon(const std::string& modification);
};

// R.E.P.O. Mechanics class definition
class RepoMechanics {
public:
    void collectItems(Player& player);
};

// Physics Engine class definition
class PhysicsEngine {
public:
    void applyGravity();
    void handleCollisions();
};

// Main Game Engine class that ties everything together
class GameEngine {
private:
    GraphicsEngine graphics;
    Vault vault;
    PhysicsEngine physics;
public:
    void startGame();
};

#endif // GAME_H