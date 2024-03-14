#include "api/application.hpp"

int main() {
    vle::Application app{1280, 960, "Vulkan Learning"};

    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
