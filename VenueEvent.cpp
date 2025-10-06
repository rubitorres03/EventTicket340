#include <iostream>
#include <string>
#include "VenueEvent.h"

VenueEvent::VenueEvent(){}

VenueEvent::VenueEvent(const std::string& name, const std::string& description, int rating, 
    int soldTicketsCount,const std::string& venue,const std::string&dateTime, int capacity): Event(name,description,
        rating, soldTicketsCount),venue(venue),dateTime(dateTime),capacity(capacity){
}

VenueEvent::~VenueEvent{}

void VenueEvent::setVenue(const std::string& venue) {
    VenueEvent::venue = venue;
}

std::string VenueEvent::getVenue() const{
    return venue;
}

void VenueEvent::setDateTime(const std::string& dateTime) {
    VenueEvent::dateTime = dateTime;

    std::string VenueEvent::getDateTime() const{
        return dateTime;
    }

    void VenueEvent::setCapacity(int capacity){
        VenueEvent::capacity = capacity;
    }

    int VenueEvent::getCapacity() const{
        return capacity;
    }

    bool VenueEvent::sell(int quantity) {
        if(capacity >= quantity) {
            capacity -= quantity;
            setSoldTicketsCount(getSoldTicketsCount() + quantity);
            return true;
        } else {
            std::cout << "Sold out" <<std::endl;
            return false;
        }
    }

}

