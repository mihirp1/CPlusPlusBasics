#include "plorg.h"
#include<iostream>

int main(int argc,char* argv[])

   {

   std::cout << "My Plorg is here : "<<std::endl;

   plorg p1;   

   p1.setci(106890);
   std::cout << p1.getci() <<std::endl;
   std::cout << std::string(p1.getplorg()) <<std::endl;
   //printf("%c",p1.getplorg());
   


   return 0;

   }
    
