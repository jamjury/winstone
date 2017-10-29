#ifndef WINSTONE_COMBINEDEVENT_H
#define WINSTONE_COMBINEDEVENT_H


#include "Event.h"
#include <memory>

class CombinedEvent : public Event {
	std::unique_ptr<Event> first, second;
public:
	CombinedEvent(std::unique_ptr<Event> first, std::unique_ptr<Event> second);

	void occur(Player &player) override;
};


#endif //WINSTONE_COMBINEDEVENT_H
