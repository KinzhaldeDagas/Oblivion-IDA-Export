struct JoystickDeviceState
{
DIJOYSTATE currentState; ///< [Controller decode 2026-07-09] Current-frame DIJOYSTATE read by GetDeviceState; 0x50 bytes.
UInt8 previousState[32]; ///< [Controller decode 2026-07-09] Previous-frame DIJOYSTATE copied before polling; full 0x50-byte state, not only buttons.
};
