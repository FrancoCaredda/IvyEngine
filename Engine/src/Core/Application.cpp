#include "Application.h"

namespace Ivy {
	EventProvider Application::InputReceived;

	void Application::Run()
	{
		// Init
		InitWindow();
		InitGlad();
		Start();

		// Loop

		auto lastTime = std::chrono::high_resolution_clock::now();
		while (!glfwWindowShouldClose(m_Window))
		{
			glClear(GL_COLOR_BUFFER_BIT);

			auto now = std::chrono::high_resolution_clock::now();
			float deltaTime = std::chrono::duration<float>(now - lastTime).count();
			lastTime = now;

			Update(deltaTime);

			glfwPollEvents();
			glfwSwapBuffers(m_Window);
		}
	}

	Application::~Application()
	{
		glfwDestroyWindow(m_Window);
		glfwTerminate();
	}

	void Application::InitWindow()
	{
		if (!glfwInit())
			throw std::runtime_error::exception("GLFW hasn't been initialized!");

		glfwSwapInterval(0);
		m_Window = glfwCreateWindow(m_WindowSpec.Width, m_WindowSpec.Height, &m_WindowSpec.Title[0], nullptr, nullptr);

		if (!m_Window)
			throw std::runtime_error::exception("Window hasn't been created!");

		glfwMakeContextCurrent(m_Window);
		glfwSetKeyCallback(m_Window, KeyCallbackInternal);
	}

	void Application::InitGlad()
	{
		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
			throw std::runtime_error::exception("Failed to initialize GLAD");
	}

	void Application::KeyCallbackInternal(GLFWwindow* window, int key, int scancode, int action, int mods)
	{
		switch (action)
		{
		case GLFW_PRESS:
			InputReceived.Execute(KeyPressedEvent{ static_cast<KeyCodes>(key) });
			break;
		case GLFW_REPEAT:
			InputReceived.Execute(KeyHoldEvent{ static_cast<KeyCodes>(key) });
			break;
		case GLFW_RELEASE:
			InputReceived.Execute(KeyReleasedEvent{ static_cast<KeyCodes>(key) });
			break;
		default:
			break;
		}
	}
}
