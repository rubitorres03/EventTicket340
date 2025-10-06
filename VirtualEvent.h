#ifndef VIRTUAL_EVENT_
#define VIRTUAL_EVENT_

#include "Event.h"

#include <iostream>
#include <String>

class VirtualEvent : public Event{
public:
    VirtualEvent();
    VirtualEvent(const std::string& name, const std::string& description, const std::string& streamLink,
         const std::string& audience, const std::string& accessCode);

    ~VirtualEvent();

    void setStreamLink(const std:: string& streamLink);
    std::string getStreamLink() const;

    void setAudience(const std:: string& audience);
    std::string getAudience() const;

    void setAccessCode(const std:: string& accessCode);
    std::string getAccessCode() const;

    private:
        std::String streamLink;
        std::String audience;
        std::String accessCode;
}

#endif