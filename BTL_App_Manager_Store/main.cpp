#include "LoginForm.h"
#include "MainWindows.h"

using namespace BTLAppManagerStore;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	APP_SESSION::APP_SESSION();

	while (!APP_SESSION::isLogin)
	{
		Application::Run(gcnew LoginForm());
		if (APP_SESSION::currentUser->getId() == 0) break;
		if (APP_SESSION::isLogin) Application::Run(gcnew MainWindows());
	}
	
	return 0;
}