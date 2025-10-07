
// TO DO: #include all the standard libraries and your own libraries here
   #include <iostream>
   #include <string>
   #include "Event.h"
   #include "VirtualEvent.h"
   #include "VenueEvent.h"
// TO DO: function implementations

   Event::Event(){}


   Event::Event(const std::string& name, const std::string& description,int rating, int soldTicketsCount):
   name(name),description(description),rating(rating),soldTicketsCount(soldTicketsCount){
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

   void Event::setRating(int rating) {
      Event::rating = rating;
   }

   int Event:: getRating() const {
      return rating;
   }

   int Event:: getSoldTicketsCount() const{
      return soldTicketsCount;
   }

   void Event::display() const {
      std::cout << "Event name: " << name << std::endl;
      std::cout << "Description: " << description << std::endl;
      std::cout << "Rating: " << rating << std::endl;
      std::cout << "Tickets sold: " << soldTicketsCount << std::endl;
   }

   void Event::modify(bool changeAll){
      std::string newValue;
      std::cout << "Modify event: " << name << std::endl;
      std::cout << "Enter new event name: ";
      std::getline(std::cin, newValue);
      if (!newValue.empty()) setName(newValue);
   }

   if(changeAll) {
      std::cout << "Enter new description: ";
      std::getline(std::cin, newValue);
      if (!newValue.empty()) setDescription(newValue); 
   }

   std::cout << "Enter new rating: ";
   std::getline(std::cin, newValue);
   if(!newValue.empty()) setRating(newValue);

   bool Event:: sell(int quantity) {
      if(quantity <= 0 ){
         return false;
      } else {
         soldTicketsCount += quantity;
         return true;
      }
   }

   }
   // ------------------------------------------------------------------------------
   // Operator overloading implementation
   bool Event::operator==(const Event& otherEvent) const {
      return Event::name == otherEvent.name;
   }






