/*#include "Player.h"



Player::Player(sf::Texture* texture, sf::Vector2u imageCount, float switchTime, float speed) :
	animation(texture,imageCount,switchTime)
{
	this->speed = speed;
	row = 0;
	faceRight = true;

	body.setSize(sf::Vector2f(100.0f, 150.0f));
	body.setOrigin(body.getSize() / 2.0f);
	body.setPosition(0.0f, 0.0f);
	body.setTexture(texture);


}


Player::~Player()
{

}
void Player::Update(float deltaTime)
{
	sf::Vector2f movement(0.0f, 0.0f);

	

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		movement.x -= speed * deltaTime;
		row = 2;
		
	}
		  
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		movement.x += speed * deltaTime;
		row = 1;
	}
		
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		movement.y += speed * deltaTime;
		row = 4;
	}
		
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		movement.y -= speed * deltaTime;
		row = 3;
	}
	if (row == 3 &&movement.y == 0)
	{
		row = 0;
	}
	if (row == 4 && movement.y == 0)
	{
		row = 5;
	}
	if (row == 2 && movement.x == 0)
	{
		row = 6;
	}
	if (row == 1 && movement.x == 0)
	{
		row = 7;
	}
		


	animation.Update(row, deltaTime, faceRight);
	body.setTextureRect(animation.uvRect);
	body.move(movement);

}

void Player::Draw(sf::RenderWindow& window)
{
	window.draw(body);
}*/