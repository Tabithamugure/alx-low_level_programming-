 #include <stdio.h>                                                                                                              
                                                                                                                                 
 /**                                                                                                                             
  * main - Entry point                                                                                                           
  *                                                                                                                              
  * Description: prints the size of various data type                                                                            
  *                                                                                                                              
  * Return: Always 0 (success)                                                                                                   
  *                                                                                                                              
  */                                                                                                                             
                                                                                                                                 
 int main(void) 
 {
     printf("size of a char: %d byte(s)\n", (int)sizeof(char));                                                                  
     printf("Size of an int: %d byte(s)\n", (int)sizeof(int));                                                                   
     printf("Size of a long int: %d byte(s)\n", (int)sizeof(long int));                                                          
     printf("Size of a long long int: %d bytes(s)\n", (int)sizeof(long long int));                                               
     printf("Size of a float: % byte(s)\n", (int)sizeof(float));                                                                 
     return (0); 
 }
