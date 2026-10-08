struct __declspec(align(4)) InputGlobal
{
UInt32 flags; ///< [Controller decode 2026-07-09] bit0 joystick/controller present, bit1 mouse, bit2 keyboard, bit3 background mouse.
IDirectInput8 *dinputInterface; ///< [Controller decode 2026-07-09] Root IDirectInput8 interface.
IDirectInputDevice8 *joystickInterfaces[8]; ///< [Controller decode 2026-07-09] IDirectInputDevice8*[8] for enumerated DirectInput joystick/gamepad devices.
IDirectInputDevice8 *keyboardInterface; ///< [Controller decode 2026-07-09] IDirectInputDevice8* using keyboard data format.
IDirectInputDevice8 *mouseInterface; ///< [Controller decode 2026-07-09] IDirectInputDevice8* using mouse data format.
JoystickDeviceState joystickDeviceStates[8]; ///< [Controller decode 2026-07-09] JoystickDeviceState[8]; executable uses 0xA0 stride per device.
UInt8 unk03B0[384];
DIDEVICEINSTANCE joystickDevices[8]; ///< [Controller decode 2026-07-09] DIDEVICEINSTANCE[8] copies from DirectInput EnumDevices callback; stride 0x244.
DIDEVCAPS joystickDevCaps[8]; ///< [Controller decode 2026-07-09] DIDEVCAPS[8] filled by GetCapabilities; dwButtons/dwPOVs feed Controls menu display and capture.
JoystickObjectsInfo joystickObjectInfo[8]; ///< [Controller decode 2026-07-09] JoystickObjectsInfo[8] axis/POV object metadata from EnumObjects.
UInt32 numJoysticks; ///< [Controller decode 2026-07-09] Count of accepted DirectInput joystick/gamepad devices, max 8.
UInt8 CurrentKeyState[256]; ///< [Controller decode 2026-07-09] Current 256-byte DirectInput keyboard state.
UInt8 PreviousKeyState[256]; ///< [Controller decode 2026-07-09] Previous 256-byte DirectInput keyboard state.
Unk1AF4 mouseDeviceCaps; ///< [Controller decode 2026-07-09] DIDEVCAPS-sized mouse capability block; dwSize is set to 0x2C before GetCapabilities.
DIMOUSESTATE2 CurrentMouseState; ///< [Controller decode 2026-07-09] Current DIMOUSESTATE2.
DIMOUSESTATE2 PreviousMouseState; ///< [Controller decode 2026-07-09] Previous DIMOUSESTATE2.
UInt32 oldMouseButtonSwap; ///< [Controller decode 2026-07-09] SwapMouseButton state captured during initialization.
UInt32 doubleClickTime; ///< [Controller decode 2026-07-09] GetDoubleClickTime result used for mouse button double-click detection.
UInt8 mouseDoubleClickFlags[8]; ///< [Controller decode 2026-07-09] Mouse double-click flags for buttons 0..7; not joystick/controller state.
UInt32 mouseButtonPressTimestamps[8]; ///< [Controller decode 2026-07-09] Mouse button press timestamps used to detect double-clicks; not joystick/controller state.
UInt32 unk1B78;
UInt16 unk1B7C;
UInt8 KeyboardInputControls[29]; ///< [Controller decode 2026-07-09] 29-byte keyboard binding block; INI packed byte value >> 16.
UInt8 MouseInputControls[29]; ///< [Controller decode 2026-07-09] 29-byte mouse binding block; INI packed byte value >> 8.
UInt8 JoystickInputControls[29]; ///< [Controller decode 2026-07-09] 29-byte first-joystick/controller binding block; INI packed byte value & 0xFF.
UInt8 AlwaysRunControlBoh; ///< [Controller decode 2026-07-09] Adjacent default joystick byte set by ResetControlMap; outside persisted 29-row JoystickInputControls block.
UInt8 pad1BD6[2];
};
