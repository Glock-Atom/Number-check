#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
      int zahl = 0;
      int ergebnis = 0;
      
      for(zahl = 0; zahl<=999;zahl++){
      	 if(zahl%3 == 0){
      	 	ergebnis += zahl;
		   }
		   else if(zahl%5 == 0){
		   	ergebnis += zahl;
		   }
	  }
    printf("%d",ergebnis);
    return 0;
}
