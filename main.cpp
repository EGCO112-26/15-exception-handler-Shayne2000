#include <iostream>

class myf1 : public std::exception {
	public :
		virtual const char* what() const throw(){
			return "dev by 0" ;
		}
};

class myf2 : public std::exception {
	public :
		virtual const char* what() const throw(){
			std::cin.clear();
            std::cin.ignore(50,'\n');
			return "not number" ;
		}
};

int main(){
	int x,y;
	double d;
	int pass = 0;
	do{
		pass = 1 ;
		try {
			std::cin>>x>>y;
		
			if(std::cin.fail()){
				myf2 f2 ;
				throw f2 ;
			}
			if(abs(x)>1000 ||abs(y)>1000){
				throw("alue out of range");
			}
			if (y==0) {
				myf1 f1;
				throw f1;
			}
			d=(double) x/y;
			std::cout<< "The result is " <<d<<std::endl;	
		}

		catch(std::exception &e){
			std::cout<<"std error : "<<e.what()<<std::endl;
			pass = 0 ;
		}
	}while (pass == 0);

	
	return 0;
}
