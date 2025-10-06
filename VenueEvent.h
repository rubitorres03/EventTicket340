#ifndef VENUE_EVENT_
#define VENUE_EVENT_

#include <iostream>
#include <String>
#include "Event.h"

class VenueEvent : public Event{
public:
    VenueEvent();

    VenueEvent(const std::string& name, const std::string& description )




private: 
    std::String venue;       //data fields
    std::String dateTime;
    int capacity;
};

#endif