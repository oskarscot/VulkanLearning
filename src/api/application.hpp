#pragma once

#include <iostream>
#include "window.hpp"

namespace vle {
    class Application {
    public:
        Application(int width, int height, std::string title) : window {width, height, title} {
            std::cout << "Initialising..." << std::endl;
        }
        ~Application();
        void run();

    private:
        Window window;
    };
}

