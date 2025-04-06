#pragma once
#include <iostream>

class Entity {
protected:
    std::string name;
    int health;
    int power;
    int defense;

public:
    Entity(const std::string& n, int h, int p, int d);

    int getDefense() const;  

    int getHealth() const;

    void setHealth(int h);

    std::string getName();

    // ����������� ����� ��� �����
    virtual void attack(Entity& target);

    virtual void heal(int amount);

    // ����������� ����� ��� ������ ����������
    virtual void displayInfo() const;

    // ����������� ����������
    virtual ~Entity();
};


