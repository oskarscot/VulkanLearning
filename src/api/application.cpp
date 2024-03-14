#include "application.hpp"

namespace vle {
    Application::~Application() = default;

    void Application::run() {
        while (!window.shouldClose()) {
            glfwPollEvents();
        }
    }
}
