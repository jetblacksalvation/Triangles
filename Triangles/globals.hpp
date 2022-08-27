#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <math.h>

//globals -------------

int constexpr offset = 500;
int angle = 0;
int dist;
//this will hold all instances of point
//pass by value to not overight data
std::vector<struct points*> draw_vec;




//window and event
sf::RenderWindow window({ 1000,1000 }, "Triangles");
sf::Event event;


// end globals
float distance(sf::Vector2f point1, sf::Vector2f point2) {
	//distance formula, eventually convert to 3D
	return sqrtf(
		powf(point1.x - point2.x, 2) + powf(point1.y - point2.y, 2)
	);
}

struct points {
	points(sf::PrimitiveType t, size_t p_total, std::initializer_list<sf::Vector2f> p) {
		shape.setPrimitiveType(t);
		shape.resize(p_total);

		for (auto iter : p) {
			shape.append(iter);
		}
		draw_vec.push_back(this);


	}
	sf::VertexArray shape;



}tri = {sf::Triangles, 3,{
	//position of points
	{offset, offset+50.f}, {1+offset,offset+ 200.f},{offset+200.f,offset+ 200.f}

}};

