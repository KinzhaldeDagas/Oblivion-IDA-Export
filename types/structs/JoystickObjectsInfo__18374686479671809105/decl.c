struct JoystickObjectsInfo
{
UInt32 axisMask; ///< [Controller decode 2026-07-09] bit0 X, bit1 Y, bit2 Z, bit3 Rx, bit4 Ry, bit5 Rz.
UInt32 povMask; ///< [Controller decode 2026-07-09] POV/object mask from DirectInput EnumObjects instance numbers.
};
