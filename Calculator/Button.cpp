#include <SFML/Graphics.hpp>
#include "Config.h"
#include "Button.h"

Button::Button(Vector2f size) :shape(size)
{
	font.loadFromFile("arial.ttf");
	this->text.setCharacterSize(30);
	this->text.setFillColor(Color::White);
}

void Button::setString(string str) {
	this->text.setString(str);
}

void Button::setFillColor(Color color)
{
	if (flagDefColor) {
		this->color = color;
		flagDefColor = false;
	}
	shape.setFillColor(color);
}

void Button::setOutlineColor(Color color)
{
	shape.setOutlineColor(color);
}

void Button::setOutlineThickness(int size)
{
	shape.setOutlineThickness(size);
}

void Button::setPosition(Vector2f position)
{
	Vector2f posText(position);
	posText.x += (shape.getSize().x) / 2 - (text.getCharacterSize() / 1.5 * text.getString().getSize()) / 2;
	posText.y += (shape.getSize().y) / 2 - (text.getCharacterSize()) / 2;

	shape.setPosition(position);
	text.setPosition(posText);
}

void Button::draw(RenderWindow& window) {
	this->text.setFont(font);
	window.draw(shape);
	window.draw(text);
}

Vector2f Button::getPos()
{
	return shape.getPosition();
}

Color Button::getOutlineColor()
{
	return shape.getOutlineColor();
}

Color Button::getColor() {
	return color;
}

string Button::getString() {
	return text.getString();
}