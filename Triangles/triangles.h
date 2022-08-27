#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "globals.hpp"




void m_loop() {
	//limit framerate
	window.setFramerateLimit(60);



	for (int x = 0; x < tri.shape.getVertexCount(); x++) {
		tri.shape[x].color = sf::Color::White;
	}
	while (window.isOpen() == true)
	{
		while (window.pollEvent(event)) {
			//event queue
			if (event.type == event.Closed) {
				window.close();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q)) {
				angle--;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::E)) {
				angle++;
			}
		}
		//check
		if (angle >= 360) {
			angle = 0;
		}
		else if (angle < 0) {
			angle = 359;
		}
		//temps
		

		//update points
		for (points* iter : draw_vec) {
			for (int x = 0; x < iter->shape.getVertexCount(); x++) {
				dist = distance({ 500,500 }, iter->shape[x].position);
				iter->shape[x].position = {(cosf(angle) * dist) + 500.f, (sinf(angle) * dist) + 500.f};
				std::cout <<"is the x position " << iter->shape[x].position.x << std::endl<<std::endl;
				std::cout << "is the y position " << iter->shape[x].position.y << std::endl<<std::endl;
				if (iter->shape[x].position.x >= 1000 || iter->shape[x].position.x <= 0) {
					system("pause");
				}
				else if (iter->shape[x].position.y >= 1000 || iter->shape[x].position.y <= 0) {
					system("pause");
				}
				


			}
		}


		//drawing
		
		//iterate through shape, create temp version of shape - implement something that carries tri objects, and iterate through that  


		
		window.clear(sf::Color::Black);
		//eventually add a for loop that iteravely draws shapes (that are on screeen)

		window.draw(draw_vec[0]->shape);
		window.display();
	}


}



