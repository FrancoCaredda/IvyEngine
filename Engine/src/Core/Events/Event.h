#pragma once

#include <functional>

namespace Ivy {
	template<typename...TArgs>
	class MulticastDelegate
	{
	public:
		MulticastDelegate() = default;
		MulticastDelegate(const MulticastDelegate&) = delete;
		MulticastDelegate(MulticastDelegate&&) noexcept = delete;

		template<typename TObject>
		void AddBound(TObject& object, void(TObject::* callback)(TArgs...))
		{
			m_Callbacks.emplace_back([&object, callback](TArgs...args) {
				std::invoke(callback, object, args...);
			});
		}

		void AddRaw(const std::function<void(TArgs...)>& callback)
		{
			m_Callbacks.emplace_back(callback);
		}

		void AddRaw(std::function<void(TArgs...)>&& callback)
		{
			m_Callbacks.emplace_back(callback);
		}

		void Broadcast(TArgs...args)
		{
			for (auto& callback : m_Callbacks)
			{
				callback(args...);
			}
		}
	private:
		std::vector<std::function<void(TArgs...)>> m_Callbacks;
	};

	enum EventType
	{
		EventTypeNone		 = 1 << 0,

		WindowResize		 = 1 << 1,
		WindowClose			 = 1 << 2,
		
		KeyPressed			 = 1 << 3,
		KeyReleased			 = 1 << 4,
		KeyHold				 = 1 << 5,

		MousePressed		 = 1 << 6,
		MouseReleased		 = 1 << 7,
		MouseHold			 = 1 << 8
	};

	enum EventCategory
	{
		EventCategoryNone		= 1 << 0,

		InputEvent				= 1 << 1,
		WindowEvent			    = 1 << 2,
		MouseEvent				= 1 << 3
	};

#define EVENT_BODY(Type, Category) virtual EventType GetType() const override { return EventType::##Type; }\
								   virtual EventCategory GetCategory() const override { return EventCategory::##Category; }


	class Event
	{
	public:
		Event() = default;

		virtual EventType GetType() const = 0;
		virtual EventCategory GetCategory() const = 0;

		virtual const void* GetEventData() const = 0;
	};

	class EventSubscriber
	{
	public:
		virtual void OnEventReceived(const Event& event) = 0;
	};

	class API EventProvider
	{
	public:
		EventProvider() = default;
		EventProvider(const EventProvider&) = delete;
		EventProvider(EventProvider&&) noexcept = delete;

		void Subscribe(EventSubscriber& subscriber);
		void Execute(const Event& event);
	private:
		MulticastDelegate<const Event&> m_EventDelegate;
	};
}