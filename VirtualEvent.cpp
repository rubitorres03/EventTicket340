#include <iostream>
#include <string>
#include "VirtualEvent.h"
#include "Event.h"

//List<String>

//class Base;
VirtualEvent::VirtualEvent(){}

VirtualEvent::VirtualEvent(const std::string& name, const std::string& description, int rating,
    int soldTicketsCount, const std::string& streamLink, const std::string& audience): Event (name,description,
    rating,soldTicketsCount),streamLink(streamLink),audience(audience){}

    VirtualEvent::~VirtualEvent{}

    void VirtualEvent::setStreamLink(const std::string& streamLink) {
        VirtualEvent::streamLink = streamLink;
    }

    std::string VirtualEvent::getStreamLink() const{
        return streamLink;
    }

    void VirtualEvent::setAudience(const std::string& audience) {
        VirtualEvent::audience = audience;
    }

    std::string VirtualEvent::getAudience() const{
        return audience;
    }

     bool VirtualEvent::sell(int quantity) {
        if(capacity >= quantity) {
            capacity -= quantity;
            setSoldTicketsCount(getSoldTicketsCount() + quantity);
            return true;
        } else {
            std::cout << "Sold out!" <<std::endl;
            return false;
        }
    }

    bool VirtualEvent::accessCode

