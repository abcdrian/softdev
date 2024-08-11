#include "LoginForm.h"
#include "SignUpForm.h"
using namespace LoginSignup32;

[STAThreadAttribute]
int main() {

	Application::Run(gcnew LoginForm());

	return 0;
}

