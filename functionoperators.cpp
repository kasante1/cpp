#include <cstdio>
#include<cstdint>

// function types
// function operator first method

struct CountIf{
	CountIf(char x): x{x}{}
	size_t operator()(const char* str) const{
		size_t index{}, result{};
		while (str[index]){
			if(str[index] == x) result++;
			index++;
		}
		return result;
	}
private:
	const char x;
};

//second function operator

size_t count_if(char x, const char* str){
	size_t index{}, result{};
	while(str[index]){
		if (str[index] == x) result++;
		index++;
	}
	return result;
}

int main(){
	//first method

	CountIf s_counter{'s'};
	auto sally= s_counter("sally sells seashells by the seashore");
	printf("sally: %zd\n", sally);
	auto sailor = s_counter("sailor went to sea to see what he could see.");
	printf("sailor: %zd\n", sailor);

	/*second method
	*another way to implement the function operators
	*same as the previous one
	*/

	auto buffolo = CountIf{'f'}("buffolo buffolo buffolo buffolo buffolo buffolo");
	printf("Buffolo: %zd\n", buffolo);


	//second function operator

	auto sal = count_if('s', "Sally sells seashells by the seashore.");
	printf("Sal: %zd\n", sal);
	auto sail = count_if('s', "Sailor went to sea to see what he could see.");
	printf("Sail: %zd\n", sail);

}
