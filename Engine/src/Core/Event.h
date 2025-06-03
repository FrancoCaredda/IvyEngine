#pragma once

#include <functional>

template<typename... TArgs>
class EventSubscriber
{
public:
	virtual void Recieve(TArgs...& args) = 0;
};

template<typename... TArgs>
class Event final
{
public:
	using Callback = std::function<void(TArgs...&)>;

	explicit Event()
	{
		m_Subscribers.reserve(5);
	}
	
	void Subscribe(const Callback& callback)
	{
		m_Subscribers.push_back(callback);
	}

	void Subscribe(EventSubscriber* subscriber)
	{
		m_Subscribers.push_back([subscriber](TArgs& args) {
			subscriber->Recieve(args);
		});
	}
	
	void Execute(TArgs...& args)
	{
		for (Callback& callback : m_Subscribers)
		{
			callback(args);
		}
	}
private:
	std::vector<Callback> m_Subscribers;
};