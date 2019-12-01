#pragma once
#include <string>

class Character
{
public:
	Character();
	Character(std::string name);
	Character(std::string name, int level, float power);
	~Character();
	void SetName(std::string name);
	void SetLevel(int level);
	void SetPower(float power);
	std::string& GetName();
	int GetLevel();
	float GetPower();
	void SetAttributes(std::string name = "default name", int level = 1, float power = 0.f);
	void PrintAttributes();

private:
	std::string Name;
	int Level;
	float Power;
};