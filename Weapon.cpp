// Weapon.cpp

#include "Weapon.h"

// Weapon class implementation

Weapon::Weapon(std::string name, int maxAmmo, float damage)
    : name(name), maxAmmo(maxAmmo), currentAmmo(maxAmmo), damage(damage) {}

void Weapon::fire() {
    if (currentAmmo > 0) {
        // Implement firing logic
        currentAmmo--;
        std::cout << name << " fired! Damage dealt: " << damage << std::endl;
    } else {
        std::cout << "Out of ammo!" << std::endl;
    }
}

void Weapon::reload() {
    currentAmmo = maxAmmo;
    std::cout << "Reloaded " << name << ". Current ammo: " << currentAmmo << std::endl;
}

int Weapon::getCurrentAmmo() const {
    return currentAmmo;
}

float Weapon::getDamage() const {
    return damage;
}

void Weapon::attachMod(const WeaponMod &mod) {
    // Implement mod attachment logic
    damage *= mod.getDamageMultiplier();
    std::cout << "Attached mod: " << mod.getName() << ". New damage: " << damage << std::endl;
}

// Implementation for WeaponMod class, if required

