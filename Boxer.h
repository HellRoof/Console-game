﻿#pragma once
#include <string>
#include <random>
#include <ctime>
#include "BodyPart.h"
#include "Settings.h"
#include "Log.h"

extern Logger Log;
extern Settings settings;

class Boxer     
{
public:	
	int hp;
	std::string name;
	std::string last_name;
	unsigned int age;
	int wins{ 0 };
	bool isHumanPlayer;
	static std::mt19937 mersenne;

private:
	
	BodyPart target;
	BodyPart protectingZone;

public:
	Boxer(const std::string& name_init,const std::string& last_name_init, unsigned int age__init, bool isHuman);
	Boxer();
	int getRandom(int min, int max);
	BodyPart generateBodyPart(const std::string& prompt = "");
	bool isAlive();
	BodyPart getTarget();
	void setTarget(BodyPart part);
	BodyPart getProtectingZone();
	void setProtectingZone(BodyPart part);
	std::string getFullName(bool aligned = false);	
	void printStatus();
	void makeHuman();
	
	
};