#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

int main (int argc, char *argv[])
{

		int len = 0 ;
		char sentence[SIZE] = {0} ;
		char *ptr = 0 , *ptr1 = 0 , *ptr2 = 0 , *ptr3 = 0 ;

		printf("Enter a message: \n") ;

		while( fgets( sentence, SIZE , stdin) != NULL)
		{
				if(argc == 3)
				{
						len = strlen( argv[1] ) ;

						ptr = sentence ;
						ptr1 = sentence ;
						ptr2 = strstr( sentence , argv[1] ) ;

						
						if( ptr2 = "NULL" )
						{
								printf( "%s" , ptr1 );
								
						}
		                else       
		                {
		                		while( ptr1 != '\0' )
							    {
								  ptr2 = strstr( ptr1 , argv[1] ) ;
								  if( isspace(*(ptr2+len)) || ispunct(*(ptr2+len)))
										  break;
										  else
										  ptr1++;
							    }
						 
					
								while( ptr != ptr2 )
								{
										printf( "%c" , *ptr ) ;
										ptr++ ;
								}

								printf( "%s" , argv[2] ) ;
								printf( "%s" , ptr+len ) ;
						}
				}

		}
		return 0 ;
}

