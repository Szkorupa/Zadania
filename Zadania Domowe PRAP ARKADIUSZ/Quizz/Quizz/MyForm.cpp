#include "MyForm.h"
using namespace Quizz;
[STAThreadAttribute]
int main() {
	MyForm app;
	app.ShowDialog();
	return 0;
}