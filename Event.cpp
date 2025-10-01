
// TO DO: #include all the standard libraries and your own libraries here
   #include <iostream>
   #include <string>
   #include "Event.h"
// TO DO: function implementations


   Event::Event(){


   Event::Event(const std::string& name, const std::string& description):
   name(name),description(description){
   }
   Event::~Event(){
      std::cout << "Event: " << Event::name <<std::endl;
   }
   void setName(const std::string& name){
      Event::name = name;
   }
   std::string getName() const{
      return Event::name;
   }


   void setDescription(const std::string& description){
      Event::description = description;
   }


   std::string getDescription() const{
      return Event::description;
   }


   // ------------------------------------------------------------------------------
   // Operator overloading implementation
   bool Event::operator==(const Event& otherEvent) const {
      return Event::name == otherEvent.name;
   }
}





