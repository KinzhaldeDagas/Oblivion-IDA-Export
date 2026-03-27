void __thiscall InputGlobals::SetJoystickDeadzone(InputGlobal *this, UInt8 whichJoystick, float deadzonePercent)
{
  IDirectInputDevice8 *v3; // ecx
  _DWORD v4[5]; // [esp+8h] [ebp-14h] BYREF

  v3 = this->joystickInterfaces[whichJoystick];
  v4[3] = 0;
  v4[2] = 0;
  v4[0] = 0x14;
  v4[1] = 0x10;
  v4[4] = (__int64)(deadzonePercent * 10000.0);
  v3->vtbl->IDirectInputDevice2Impl_SetProperty(v3, 5, v4);
}
