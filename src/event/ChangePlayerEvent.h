#ifndef WINSTONE_CHANGEPLAYEREVENT_H
#define WINSTONE_CHANGEPLAYEREVENT_H


#include "Event.h"

class ChangePlayerEvent : public Event {
public:
	void act() override;
};


#endif //WINSTONE_CHANGEPLAYEREVENT_H
