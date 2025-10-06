#include <iostream>
#include <string>
#include "VirtualEvent.h"
#include "Event.h"


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

    /*void VirtualEvent::setAccessCode(const std::sring& accessCode){
        VirtualEvent::accessCode = accessCode;
    }

    std::string VirtualEvent::getAccessCode() const{
        return accessCode;
    } */

     bool VirtualEvent::sell(int quantity) {
        for(int i = 0;i < quantity;i++) {
            soldTicketsCount++;
            std::cout << "Your access code is : " << accessCode << std::endl;
        }
        return true;
    }


