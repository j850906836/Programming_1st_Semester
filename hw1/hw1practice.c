#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 1000


int main ( int argc, char *argv[] )
{
		int len = 0 ;
		char sentence[SIZE] = {0} ;
		char *ptr = 0 , *ptr1 = 0 , *ptr2 = 0 , *ptr3 = 0 ;

		printf("Enter a message: \n") ;

		if(argc == 3)
		{
				while( fgets( sentence, SIZE , stdin) != NULL)
				{
						len = strlen( argv[1] ) ;
						ptr1 = sentence ;
						ptr2 = strstr( sentence , argv[1] ) ;


						if( ptr2 == NULL )
						{
								printf( "%s" , ptr1 );
						}

						else
						{
								while( ptr1 != ptr2 )
								{
										printf( "%c" , *ptr1 ) ;
										ptr1++ ;
								}

								printf( "%s" , argv[2] ) ;
								printf( "%s" , ptr1+len ) ;
						}
				}
		}



return 0 ;
}


