#include "MainWindows.h"

using namespace BTLAppManagerStore;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainWindows());
	return 0;
}