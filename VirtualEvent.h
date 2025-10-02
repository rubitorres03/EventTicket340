#ifndef VIRTUAL_EVENT_
#define VIRTUAL_EVENT_

#include "Event.h"

#include <iostream>
#include <String>

class VirtualEvent : public Event{
    protected:
        std::String streamLink;
        std::String audience;

public:
    VirtualEvent();
    VirtualEvent(const std::string& streamLink, const std::string& audience);
    ~VirtualEvent();

}