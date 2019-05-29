#ifndef PLORG_H_
#define PLORG_H_

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<ostream>


class plorg 

  { 


 private:
        std::string name; 
        int ci;

 public: 

        plorg();
        plorg(const std::string &,const int &);

        std::string  getplorg(void) const;
        int  getci(void) const;
     
        void setci(const int&);

        friend std::ostream& operator<<(std::ostream &, const plorg &);



  };




#endif

