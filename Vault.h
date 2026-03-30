#ifndef VAULT_H
#define VAULT_H

// Vault System Header

typedef enum {
    DOOR_OPEN,
    DOOR_CLOSED,
    DOOR_LOCKED
} DoorState;

typedef struct {
    int terminalID;
    bool isActive;
} Terminal;

typedef struct {
    int radiationLevel;
    bool isContaminated;
} Radiation;

typedef struct {
    int resourceAmount;
    bool isAvailable;
} ResourceManagement;

#endif // VAULT_H