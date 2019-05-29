#include "plorg.h"


        plorg::plorg() { name = "Plorga"; ci = 50;}
  

        plorg::plorg(const std::string &nam,const int &con_ind)
        {

         ci = con_ind;
         name = nam;  
         
        }

        std::string plorg::getplorg(void) const
        {
        return name;

        }
        int  plorg::getci(void) const
        {

        return ci;

        }

        void plorg::setci(const int& con_id)
        {
        ci = con_id;

        }   
  
        std::ostream& operator<<(std::ostream &out, const plorg &A)

        {
        out << A.getplorg() << std::endl;
        return out;
        }
       
 
