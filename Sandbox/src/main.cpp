#include "Core/Application.h"

#include <iostream>

class SandboxApplication : public Application
{
public:
    explicit SandboxApplication(const WindowSpecification& windowSpec)
        : Application(windowSpec) {}
protected:
    virtual void Start() override
    {
        std::cout << "Start method!\n";
    }

    virtual void Update(float deltaTime) override
    {
        std::cout << deltaTime << "\n";
    }
};

int main(int argc, char** argv)
{

    try
    {
        SandboxApplication app(WindowSpecification{ "Sandbox", 1920, 1080 });
        app.Run();
    }
    catch (std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }

    return 0;
}