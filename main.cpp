#include <iostream>

int main(){
	int x,y;
	double d;

	try {
		for (int i = 0 ; i < 100 ; i ++) {
			new int[1000000000000000];
			std::cout<<"test"<<i<<std::endl;
		}
		std::cin>>x>>y;
	
		if(std::cin.fail()){
			throw("Incorrect type entered");
		}
		if(abs(x)>1000 ||abs(y)>1000){
			throw("alue out of range");
		}
		if (y==0) {
			throw("Error divide by zero");
		}
		d=(double) x/y;
		std::cout<< "The result is " <<d<<std::endl;	
	} catch(const char* c) {
		std::cerr << c << std:: endl;
	}
	catch(...){
		std::cout<<"mem??"<<std::endl;
	}

	
	return 0;
}
