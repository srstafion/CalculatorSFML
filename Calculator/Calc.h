#pragma once
#include "Button.h"
#include <iostream>

class Calc {
private:
	RenderWindow window;
	vector<Button> keyboard;
	string keyboardSymbols[5][4] = { 
		{"C", "CE", "x^2", "x^y"},
		{"7", "8", "9", "+"},
		{"4", "5", "6", "-"},
		{"1", "2", "3", "*"},
		{".", "0", "=", "/"} };
	String stringField = "0";
	Text textField;
	Font fontField;

	float firstValue;
	float secondValue;
	string operation;
public:
	Calc();
	void run();
	void processEvents();
	void update();
	void render();
};