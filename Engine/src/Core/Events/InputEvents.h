#pragma once

#include "Event.h"

#include "GLFW/glfw3.h"

namespace Ivy {

#define KEY_CODE(EnumValue, KeyCode) EnumValue = GLFW_KEY_##KeyCode
#define MOUSE_CODE(EnumValue, MouseCode) EnumValue = GLFW_MOUSE_##MouseCode
#define JOYSTICK_CODE(EnumValue, JoystickCode) EnumValue = GLFW_JOYSTICK_##JoystickCode
#define GAMEPAD_BUTTON_CODE(EnumValue, GamepadCode) EnumValue = GLFW_GAMEPAD_BUTTON_##GamepadCode
#define GAMEPAD_AXIS_CODE(EnumValue, GamepadAxisCode) EnumValue = GLFW_GAMEPAD_AXIS_##GamepadAxisCode

	enum class KeyCodes : uint32_t
	{
		KEY_CODE(Space, SPACE),
		KEY_CODE(Apostrophe, APOSTROPHE),
		KEY_CODE(Comma, COMMA),
		KEY_CODE(Minus, MINUS),
		KEY_CODE(Period, PERIOD),
		KEY_CODE(Slash, SLASH),
		KEY_CODE(Key0, 0),
		KEY_CODE(Key1, 1),
		KEY_CODE(Key2, 2),
		KEY_CODE(Key3, 3),
		KEY_CODE(Key4, 4),
		KEY_CODE(Key5, 5),
		KEY_CODE(Key6, 6),
		KEY_CODE(Key7, 7),
		KEY_CODE(Key8, 8),
		KEY_CODE(Key9, 9),
		KEY_CODE(Semicolon, SEMICOLON),
		KEY_CODE(Equal, EQUAL),
		KEY_CODE(A, A),
		KEY_CODE(B, B),
		KEY_CODE(C, C),
		KEY_CODE(D, D),
		KEY_CODE(E, E),
		KEY_CODE(F, F),
		KEY_CODE(G, G),
		KEY_CODE(H, H),
		KEY_CODE(I, I),
		KEY_CODE(J, J),
		KEY_CODE(K, K),
		KEY_CODE(L, L),
		KEY_CODE(M, M),
		KEY_CODE(N, N),
		KEY_CODE(O, O),
		KEY_CODE(P, P),
		KEY_CODE(Q, Q),
		KEY_CODE(R, R),
		KEY_CODE(S, S),
		KEY_CODE(T, T),
		KEY_CODE(U, U),
		KEY_CODE(V, V),
		KEY_CODE(W, W),
		KEY_CODE(X, X),
		KEY_CODE(Y, Y),
		KEY_CODE(Z, Z),
		KEY_CODE(LeftBracket, LEFT_BRACKET),
		KEY_CODE(Backslash, BACKSLASH),
		KEY_CODE(RightBracket, RIGHT_BRACKET),
		KEY_CODE(GraveAccent, GRAVE_ACCENT),
		KEY_CODE(World1, WORLD_1),
		KEY_CODE(World2, WORLD_2),
		KEY_CODE(Escape, ESCAPE),
		KEY_CODE(Enter,ENTER),
		KEY_CODE(Tab,TAB),
		KEY_CODE(Backspace,BACKSPACE),
		KEY_CODE(Insert,INSERT),
		KEY_CODE(Delete,DELETE),
		KEY_CODE(Right,RIGHT),
		KEY_CODE(Left,LEFT),
		KEY_CODE(Down,DOWN),
		KEY_CODE(Up,UP),
		KEY_CODE(PageUp,PAGE_UP),
		KEY_CODE(PageDown,PAGE_DOWN),
		KEY_CODE(Home,HOME),
		KEY_CODE(End,END),
		KEY_CODE(CapsLock,CAPS_LOCK),
		KEY_CODE(ScrollLock,SCROLL_LOCK),
		KEY_CODE(NumLock,NUM_LOCK),
		KEY_CODE(PrintScreen,PRINT_SCREEN),
		KEY_CODE(Pause,PAUSE),
		KEY_CODE(F1,F1),
		KEY_CODE(F2,F2),
		KEY_CODE(F3,F3),
		KEY_CODE(F4,F4),
		KEY_CODE(F5,F5),
		KEY_CODE(F6,F6),
		KEY_CODE(F7,F7),
		KEY_CODE(F8,F8),
		KEY_CODE(F9,F9),
		KEY_CODE(F10,F10),
		KEY_CODE(F11,F11),
		KEY_CODE(F12,F12),
		KEY_CODE(F13,F13),
		KEY_CODE(F14,F14),
		KEY_CODE(F15,F15),
		KEY_CODE(F16,F16),
		KEY_CODE(F17,F17),
		KEY_CODE(F18,F18),
		KEY_CODE(F19,F19),
		KEY_CODE(F20,F20),
		KEY_CODE(F21,F21),
		KEY_CODE(F22,F22),
		KEY_CODE(F23,F23),
		KEY_CODE(F24,F24),
		KEY_CODE(F25,F25),
		KEY_CODE(Kp0, KP_0),
		KEY_CODE(Kp1,KP_1),
		KEY_CODE(Kp2,KP_2),
		KEY_CODE(Kp3,KP_3),
		KEY_CODE(Kp4,KP_4),
		KEY_CODE(Kp5,KP_5),
		KEY_CODE(Kp6,KP_6),
		KEY_CODE(Kp7,KP_7),
		KEY_CODE(Kp8,KP_8),
		KEY_CODE(Kp9,KP_9),
		KEY_CODE(KpDecimal,KP_DECIMAL),
		KEY_CODE(KpDivide,KP_DIVIDE),
		KEY_CODE(KpMultiply,KP_MULTIPLY),
		KEY_CODE(KpSubtract,KP_SUBTRACT),
		KEY_CODE(KpAdd,KP_ADD),
		KEY_CODE(KpEnter,KP_ENTER),
		KEY_CODE(KpEqual,KP_EQUAL),
		KEY_CODE(LeftShift,LEFT_SHIFT),
		KEY_CODE(LeftControl,LEFT_CONTROL),
		KEY_CODE(LeftAlt,LEFT_ALT),
		KEY_CODE(LeftSuper,LEFT_SUPER),
		KEY_CODE(RightShift,RIGHT_SHIFT),
		KEY_CODE(RightControl,RIGHT_CONTROL),
		KEY_CODE(RightAlt,RIGHT_ALT),
		KEY_CODE(RightSuper,RIGHT_SUPER),
		KEY_CODE(Menu,MENU)
	};

	enum class MouseCodes : uint8_t
	{
		MOUSE_CODE(Button1, BUTTON_1),
		MOUSE_CODE(Button2, BUTTON_2),
		MOUSE_CODE(Button3, BUTTON_3),
		MOUSE_CODE(Button4, BUTTON_4),
		MOUSE_CODE(Button5, BUTTON_5),
		MOUSE_CODE(Button6, BUTTON_6),
		MOUSE_CODE(Button7, BUTTON_7),
		MOUSE_CODE(Button8, BUTTON_8),
		MOUSE_CODE(ButtonLast, BUTTON_LAST),
		MOUSE_CODE(ButtonLeft, BUTTON_LEFT),
		MOUSE_CODE(ButtonRight, BUTTON_RIGHT),
		MOUSE_CODE(ButtonMuddle, BUTTON_MIDDLE)
	};

	enum class JoystickCodes : uint8_t
	{
		JOYSTICK_CODE(Joystick1, 1),
		JOYSTICK_CODE(Joystick2, 2),
		JOYSTICK_CODE(Joystick3, 3),
		JOYSTICK_CODE(Joystick4, 4),
		JOYSTICK_CODE(Joystick5, 5),
		JOYSTICK_CODE(Joystick6, 6),
		JOYSTICK_CODE(Joystick7, 7),
		JOYSTICK_CODE(Joystick8, 8),
		JOYSTICK_CODE(Joystick9, 9),
		JOYSTICK_CODE(Joystick10, 10),
		JOYSTICK_CODE(Joystick11, 11),
		JOYSTICK_CODE(Joystick12, 12),
		JOYSTICK_CODE(Joystick13, 13),
		JOYSTICK_CODE(Joystick14, 14),
		JOYSTICK_CODE(Joystick15, 15),
		JOYSTICK_CODE(Joystick16, 16),
		JOYSTICK_CODE(JoystickLast, LAST)
	};

	enum class GamepadButtonCodes : uint8_t
	{
		GAMEPAD_BUTTON_CODE(GamepadA, A),
		GAMEPAD_BUTTON_CODE(GamepadB, B),
		GAMEPAD_BUTTON_CODE(GamepadX, X),
		GAMEPAD_BUTTON_CODE(GamepadY, Y),
		GAMEPAD_BUTTON_CODE(GamepadLeftBumper, LEFT_BUMPER),
		GAMEPAD_BUTTON_CODE(GamepadRightBumper, RIGHT_BUMPER),
		GAMEPAD_BUTTON_CODE(GamepadBack, BACK),
		GAMEPAD_BUTTON_CODE(GamepadStart, START),
		GAMEPAD_BUTTON_CODE(GamepadGuide, GUIDE),
		GAMEPAD_BUTTON_CODE(GamepadLeftThumb, LEFT_THUMB),
		GAMEPAD_BUTTON_CODE(GamepadRightThumb, RIGHT_THUMB),
		GAMEPAD_BUTTON_CODE(GamepadDpadUp, DPAD_UP),
		GAMEPAD_BUTTON_CODE(GamepadDpadRight, DPAD_RIGHT),
		GAMEPAD_BUTTON_CODE(GamepadDpadDown, DPAD_DOWN),
		GAMEPAD_BUTTON_CODE(GamepadDpadLeft, DPAD_LEFT),
		GAMEPAD_BUTTON_CODE(GamepadLast, LAST),

		GAMEPAD_BUTTON_CODE(GamepadCross, CROSS),
		GAMEPAD_BUTTON_CODE(GamepadCircle, CIRCLE),
		GAMEPAD_BUTTON_CODE(GamepadSquare, SQUARE),
		GAMEPAD_BUTTON_CODE(GamepadTriangle, TRIANGLE),
	};

	enum class GamepadAxisCodes : uint8_t
	{
		GAMEPAD_AXIS_CODE(GamepadAxisLeftX, LEFT_X),
		GAMEPAD_AXIS_CODE(GamepadAxisLeftY, LEFT_Y),
		GAMEPAD_AXIS_CODE(GamepadAxisRightX, RIGHT_X),
		GAMEPAD_AXIS_CODE(GamepadAxisRightY, RIGHT_Y),
		GAMEPAD_AXIS_CODE(GamepadAxisLeftTrigger, LEFT_TRIGGER),
		GAMEPAD_AXIS_CODE(GamepadAxisRightTrigger, RIGHT_TRIGGER),
		GAMEPAD_AXIS_CODE(GamepadAxisLast, LAST)
	};

	class KeyPressedEvent : public Event 
	{
	public:
		KeyPressedEvent(KeyCodes keyCode) 
			: Event(), m_KeyCode(keyCode) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const KeyCodes*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_KeyCode); }

		EVENT_BODY(KeyPressed, InputEvent)
	private:
		KeyCodes m_KeyCode;
	};

	class KeyReleasedEvent : public Event
	{
	public:
		KeyReleasedEvent(KeyCodes keyCode)
			: Event(), m_KeyCode(keyCode) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const KeyCodes*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_KeyCode); }

		EVENT_BODY(KeyReleased, InputEvent)
	private:
		KeyCodes m_KeyCode;
	};

	class KeyHoldEvent : public Event
	{
	public:
		KeyHoldEvent(KeyCodes keyCode)
			: Event(), m_KeyCode(keyCode) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const KeyCodes*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_KeyCode); }

		EVENT_BODY(KeyHold, InputEvent)
	private:
		KeyCodes m_KeyCode;
	};

	class MousePressedEvent : public Event
	{
	public:
		MousePressedEvent(MouseCodes mouseCode)
			: Event(), m_MouseCode(mouseCode) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const MouseCodes*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_MouseCode); }

		EVENT_BODY(MousePressed, MouseEvent)
	private:
		MouseCodes m_MouseCode;
	};

	class MouseReleasedEvent : public Event
	{
	public:
		MouseReleasedEvent(MouseCodes mouseCode)
			: Event(), m_MouseCode(mouseCode) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const MouseCodes*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_MouseCode); }

		EVENT_BODY(MouseReleased, MouseEvent)
	private:
		MouseCodes m_MouseCode;
	};

	class MouseHoldEvent : public Event
	{
	public:
		MouseHoldEvent(MouseCodes mouseCode)
			: Event(), m_MouseCode(mouseCode) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const MouseCodes*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_MouseCode); }

		EVENT_BODY(MouseHold, MouseEvent)
	private:
		MouseCodes m_MouseCode;
	};

	class MousePositionChangedEvent : public Event
	{
	public:
		struct MousePosition
		{
			double X;
			double Y;
		};

		MousePositionChangedEvent(const MousePosition& mousePosition)
			: Event(), m_MousePosition(mousePosition) {}

		/**
		* \return const void* - pointer to the event data (can be casted to const MousePositionChangedEvent::MousePosition*)
		*/
		virtual const void* GetEventData() const { return reinterpret_cast<const void*>(&m_MousePosition); }
	
		EVENT_BODY(MousePositionChanged, MouseEvent)
	private:
		MousePosition m_MousePosition;
	};
}