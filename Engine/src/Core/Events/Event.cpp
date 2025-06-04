#include "Event.h"


namespace Ivy {
	void EventProvider::Subscribe(EventSubscriber& subscriber)
	{
		m_EventDelegate.AddBound<EventSubscriber>(subscriber, &EventSubscriber::OnEventReceived);
	}

	void EventProvider::Execute(const Event& event)
	{
		m_EventDelegate.Broadcast(event);
	}
}