#include "Core/Application.h"
#include "Core/Events/Event.h"

#include <iostream>

class SandboxApplication : public Ivy::Application, public Ivy::EventSubscriber
{
public:
    explicit SandboxApplication(const Ivy::WindowSpecification& windowSpec)
        : Application(windowSpec) {}
protected:
    virtual void Start() override
    {
        std::cout << "Start method!\n";
        InputReceived.Subscribe(*this);
    }

public:
    virtual void OnEventReceived(const Ivy::Event& event) override
    {
        if (event.GetType() & Ivy::KeyPressed)
            std::cout << "The key " << (int)*((const Ivy::KeyCodes*)event.GetEventData()) << " has been pressed!\n";
    }
};

int main(int argc, char** argv)
{
    try
    {
        SandboxApplication app{ Ivy::WindowSpecification{"Hello world!", 1920, 1080 }};
        app.Run();
    }
    catch (std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    }
    return 0;
}