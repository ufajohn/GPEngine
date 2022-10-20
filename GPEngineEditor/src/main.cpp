#include <iostream>
#include <memory>
#include <GPEngineCore/Application.hpp>

class MyApp : public GPEngine::Application {
	
	int frame = 0;
	
	virtual void on_update() override {		
		std::cout << "Update frame: " << ++frame << std::endl;				
	}
};

int main() {	

	auto myApp = std::make_unique<MyApp>();
	int returnCode = myApp->start(1024, 768, "MyApp");
	

	std::cin.get();
}