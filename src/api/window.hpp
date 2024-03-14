#include <string>
#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"

namespace vle {

    class Window {
    public:
        Window(int width, int height, std::string title);
        ~Window();

        Window(const Window&) = delete;
        Window& operator=(const Window&) = delete;

        bool shouldClose();
    private:
        const int width;
        const int height;
        std::string title;
        GLFWwindow* window {};

        void initWindow();
    };
}