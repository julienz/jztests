/** Main file **/

#define DEBUG 1


/** Includes 
 * 
 * **/
#include <stdio.h>


#ifdef DEBUG
#	line 30 "Il était une fois l'Amérique."
#	define LOG(msg) do{printf("// %s:%s::%s(%s:%d)\n", __DATE__, __TIME__, msg, __FILE__, __LINE__);}while(0)
#else
# 	define LOG(msg) do{}while(0)
#endif 

/** Main 
 * 
 * **/
int main(int argc, char** argv){
	int result;

	LOG("Entering main");
	LOG(argv[0]);
	
	if(argc>1) {
		result = printf("Hello world and %s!\n", argv[1]);
	} else {
		result = printf("Hello world!\n");
	}	
	
	LOG("Leaving main");
	
	return result;
}
