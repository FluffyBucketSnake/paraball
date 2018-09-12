#pragma once
#include <screens/screen.h>

class TitleScreen : public Screen
{
    public:
        void Init();
        void Unload();
        void Resume();
        void Pause();
        void Update(int delta);
        void Render(SDL_Renderer* renderer, int delta);
};