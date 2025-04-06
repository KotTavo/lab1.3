#pragma once
#include "Entity.h"

class Monster : public Entity
{
public:
    Monster(const std::string& n, int h, int p, int d);

    // ��������������� ������ attack
    void attack(Entity& target) override;

    // ��������������� ������ displayInfo
    void displayInfo() const override;

};

