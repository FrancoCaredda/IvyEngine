#pragma once

#include "glad/glad.h"
#include "GLFW/glfw3.h"

struct WindowSpecification
{
	std::string_view Title;
	int Width;
	int Height;
};

class API Application
{
public:
	explicit Application(const WindowSpecification& windowSpec)
		: m_WindowSpec(windowSpec) {}

	void Run();

	~Application();
protected:
	virtual void Start() {}
	virtual void Update(float deltaTime) {}
private:
	void InitWindow();
	void InitGlad();
private:
	GLFWwindow* m_Window = nullptr;
	WindowSpecification m_WindowSpec;
};