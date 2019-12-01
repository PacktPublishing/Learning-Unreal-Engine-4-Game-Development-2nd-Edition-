#include <string>
#include <iostream>
#include "Character.h"

Character::Character()
{
	SetName("Unnamed");
	SetLevel(1);
	SetPower(10.f);
}

Character::Character(std::string name)
{
	SetName(name);
	SetLevel(1);
	SetPower(10.f);
}

Character::Character(std::string name, int level, float power)
{
	SetAttributes(name, level, power);
}

Character::~Character()
{
	std::cout << "Destroying Character: " << Name << std::endl;
}

void Character::SetName(std::string name)
{
	Name = name;
}

void Character::SetLevel(int level)
{
	Level = level;
}

void Character::SetPower(float power)
{
	Power = power;
}

std::string& Character::GetName()
{
	return Name;
}

int Character::GetLevel()
{
	return Level;
}

float Character::GetPower()
{
	return Power;
}

void Character::SetAttributes(std::string name, int level, float power)
{
	SetName(name);
	SetLevel(level);
	SetPower(power);
}

void Character::PrintAttributes()
{
	std::cout << "Name: " << Name << std::endl;
	std::cout << "Level: " << Level << std::endl;
	std::cout << "Power: " << Power << std::endl;
}