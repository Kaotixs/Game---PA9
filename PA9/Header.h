#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using std::cout;
using std::endl;


class Player: public sf::RectangleShape {
public:
	Player(sf::Color const &newColor, sf::Vector2f const &size, sf::Vector2f const &pos);

private:

};

class Projectile: public sf::CircleShape {
public:
	Projectile(const sf::Color & color, const float & radius, const sf::Vector2f & position);
	void Load(const sf::Color & color, const float & radius, const sf::Vector2f & position);
	void Destroy();


private:



};
