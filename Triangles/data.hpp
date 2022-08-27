#pragma once
#include<iostream>
#include <SFML/Graphics.hpp>
/*
	The purpose of this header is to act as the point data. 

	1. Data must be passed to Points class by value, if passed by reference that you 
	risk overighting data.
	2.(eventually) add file input and output, as a member funciton(?). To
	define and load the point data in a more efficient way
	
	FUCKING FRUSTRATING WHY THE FUCK WONT SHIT JUST WORK
	LIKE GODDAMN BITCH! JUST FUCKING RUN. I HAVE MY SHIT
	RIGHT, THE VALUES FOR THE TRIANGLE ARE LEGIT. 
	I KEPT SHIT SO GODDAMNED ORGANIZED 
	
	FUCK
	FUCK FUCK
	FUCK FUCK FUCK 
	FUCK FUCK FUCK FUCK 
	FUCK FUCK FUCK FUCK FUCK FUCK

*/
struct vals {
	sf::Vector2f pos;
	vals(std::initializer_list<sf::Vector2f> points) {

	}

};//Constructor takes std::initializer to be able to define more than one point at a time.




