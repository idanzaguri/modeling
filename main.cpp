/*
echo "# modeling" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/idanzaguri/modeling.git
git push -u origin master
*/
#include <systemc.h>

SC_MODULE (hello_world)
{
	SC_CTOR (hello_world) {
	}

	void say_hello()
	{
		cout << "Hello World SystemC-2.3.1.\n";
	}
};

int sc_main(int argc, char* argv[])
{
	hello_world hello("HELLO");
	hello.say_hello();
	return(0);
}
