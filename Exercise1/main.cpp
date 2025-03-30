#include <iostream>
#include <ifstream>

unsigned int sum_values(unsigned int N);
{
	return N*(N+1)*(2*N+1)/6
}

int main()
{	
	std::ifstream fstr("data.txt");
	
	if(fstr.fail()):
	{
		std::cerr << "file not found" << std::endl;
		return 1
		
		}
	std::string tmp:
	std::getline(fstr,tmp);
	std::cout << tmp << std::endl;
	unsigned int val;
	unsigned int sum = 0;
	while(fstr >> val)
	{
		sum += val * val;
		n++;
		}
	unsigned int S = sum_values(n);
	std::cout<< "sum = "<< sum <<std::endl;
    return 0;
}






















