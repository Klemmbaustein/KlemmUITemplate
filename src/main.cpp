#include <KlemmUI/Application.h>
#include <KlemmUI/Window.h>

#include <filesystem>
#include <iostream>

#include "ui/MainElement.hpp"

namespace kui = KlemmUI;

int main()
{
	kui::Application::Initialize("Dependencies/KlemmUI/Shaders");

	std::cout << std::filesystem::current_path() << std::endl;

	kui::Window appWindow = kui::Window("KlemmUI Project Template", kui::Window::WindowFlag::Resizable);
	//appWindow.Markup.SetDefaultFont(new kui::Font("app/Font.ttf"));

	auto appElement = new MainElement();
	appElement->SetMessage("Hello, World!");

	while (appWindow.UpdateWindow())
	{

	}

	return 0;
}

int WinMain()
{
	return main();
}