#pragma once

//SDL
#include "vcpkg\packages\sdl2_x86-windows\include\SDL2\SDL.h"
#include "vcpkg\packages\sdl2-image_x86-windows\include\SDL2\SDL_image.h"
#include "vcpkg\packages\sdl2-mixer_x86-windows\include\SDL2\SDL_mixer.h"
#include "vcpkg\packages\sdl2-ttf_x86-windows\include\SDL2\SDL_ttf.h"
#undef main

#include <iostream>

#include "vec2D.h"
#include "camera.h"
#include "image.h"
#include "input.h"
#include "sound_effect.h"
#include "object.h"
#include "world.h"