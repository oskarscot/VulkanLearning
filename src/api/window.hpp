#include <string>
#define GLFW_INCLUDE_VULKAN
#include "GLFW/glfw3.h"

namespace vle {

    class Window {
    public:
        Window(int width, int height, std::string title);
        ~Window();

        bool shouldClose();
    private:
        const int width;
        const int height;
        std::string title;
        GLFWwindow* window {};

        void initWindow();
    };
}