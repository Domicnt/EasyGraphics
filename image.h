#pragma once
#include "stdafx.h"
class Image
{
	//SDL texture which holds the image
	SDL_Texture* texture;
	//Position to be drawn to on the renderer
	Vec2D dstPosition;
	//Position on the texture to be drawn
	Vec2D srcPosition;
	//Dimensions on the renderer
	Vec2D dstDimensions;
	//Dimensions on the texture
	Vec2D srcDimensions;
public:
	//Constructor
	Image(std::string path, SDL_Renderer* renderer);
	//Render image to passed renderer
	void render(SDL_Renderer* renderer);
};

