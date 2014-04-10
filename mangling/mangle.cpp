#include <iostream>


class helloworld{
public:
	void hello(){
		std::cout << "hello world\n";
	}

};

int main(){
	helloworld x;
	x.hello();
}
