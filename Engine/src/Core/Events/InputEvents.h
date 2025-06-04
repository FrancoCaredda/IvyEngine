#pragma once

#include "Event.h"

namespace Ivy {
	class KeyPressedEvent : public Event 
	{
	public:
		KeyPressedEvent(int keyCode) 
			: Event(), m_KeyCode(keyCode) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const int*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_KeyCode); }

		EVENT_BODY(KeyPressed, InputEvent)
	private:
		int m_KeyCode;
	};

	class KeyReleasedEvent : public Event
	{
	public:
		KeyReleasedEvent(int keyCode)
			: Event(), m_KeyCode(keyCode) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const int*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_KeyCode); }

		EVENT_BODY(KeyReleased, InputEvent)
	private:
		int m_KeyCode;
	};

	class KeyHoldEvent : public Event
	{
	public:
		KeyHoldEvent(int keyCode)
			: Event(), m_KeyCode(keyCode) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const int*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_KeyCode); }

		EVENT_BODY(KeyHold, InputEvent)
	private:
		int m_KeyCode;
	};
}