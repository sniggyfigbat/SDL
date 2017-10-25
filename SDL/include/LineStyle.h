#pragma once

#include <string>
#include <SFML/Graphics.hpp>

using namespace std;
class LineStyle
{
private:
	sf::Color colour;
	float weight;
	//sf::LineType lineType // THIS DUNT WURK
public:
	LineStyle(sf::Color c, float w, string lt);
	sf::Color getColour();
	void setColour(string rgba);
	void setColour(sf::Color);
	float getWeight();
	void setWeight(float w);
	//sf::LineType getStyle();
	void setStyle(string lt);
	//void setStyle(sf::LineType lt);
};