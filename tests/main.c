
// start from here 
#include "tests.h"


int main(int argc, char **argv)
{
	// printf("arc: %i\n", argc);
    for (int i = 1; i < argc; i++)
    {
		
		if (!strcmp(argv[i], "--help"))
		{
			// printf("...");
            printf("%s", "Usage: ./a.out [option]= [exec]\n"); 
            printf("options: \n");
            printf("	--help: print this help\n");
            printf("	--CheckMem= check memory errors\n");
            
        }
        else if (!strcmp(argv[i], "--CheckMem="))
        {
			// printf("...");
            checkMemoryLeaks(argv[i + 1]);
        }
    }
    return 0;

}