#pragma once

#include <iostream>
#include <stdint>
#include <stdarg>
#include <cmath>
#include <unordered_map>
#include <queue>
// Platform-specific include SDL2
#if defined(_WIN32) || defined(WIN32)
#define WINDOWS 1
#include <SDL.h>
#include <SDL_image.h>
#elif defined(__unix__) || defined(linux)
#define LINUX 1
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#endif

namespace Combustion {

    // namespace Engine

    /*
    A float position in 2D space.
    */
    struct Pos {
        float x = 0.f;
        float y = 0.f;
        // float z;
    };

    /*
    An integer position in 2D space.
    */
    struct IntPos {
        int x = 0;
        int y = 0;
        // int z;
    };

    enum flags {
        
    }

    class Entity;
    class Engine {
        public:

        private:
            static std::unordered_map<Entity*, uint64_t> allEntities;
            static std::queue<uint64_t> freeIds;
    };

    /*
    Revs the engine.
    */
    bool rev(uint32_t flags);
}