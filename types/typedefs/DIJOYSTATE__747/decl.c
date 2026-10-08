struct DIJOYSTATE
{
LONG lX; ///< [Controller decode 2026-07-09] Axis selector 1.
LONG lY; ///< [Controller decode 2026-07-09] Axis selector 2.
LONG lZ; ///< [Controller decode 2026-07-09] Axis selector 3.
LONG lRx; ///< [Controller decode 2026-07-09] Axis selector 4.
LONG lRy; ///< [Controller decode 2026-07-09] Axis selector 5.
LONG lRz; ///< [Controller decode 2026-07-09] Axis selector 6.
LONG rglSlider[2]; ///< [Controller decode 2026-07-09] Two sliders accepted by g_joystickDIDATAFORMAT; not used by stock player axis settings observed so far.
DWORD rgdwPOV[4]; ///< [Controller decode 2026-07-09] Four DirectInput POV angles; neutral is 0xFFFF/0xFFFFFFFF.
BYTE rgbButtons[32]; ///< [Controller decode 2026-07-09] 32 button bytes; high bit set means pressed.
};
