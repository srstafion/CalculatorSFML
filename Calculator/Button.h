#pragma once
class Button
{
private:
	Text text;
	Font font;
	RectangleShape shape;
	Color color;
	bool flagDefColor = true;
public:
	Button(Vector2f size);

	void setFillColor(Color color);

	void setOutlineColor(Color color);

	void setOutlineThickness(int size);

	void setPosition(Vector2f position);

	void setString(string str);

	void draw(RenderWindow& window);

	Vector2f getPos();

	Color getOutlineColor();

	Color getColor();

	string getString();
};