// [Controller decode 2026-07-09] Sets joystick deadzone through DIPROP_DEADZONE. Oblivion passes a float percent; DirectInput property value is deadzonePercent * 10000.
void __thiscall InputGlobals::SetJoystickDeadzone(InputGlobal *this, UInt8 whichJoystick, float deadzonePercent)
{
  IDirectInputDevice8 *v3; // ecx
  _DWORD v4[5]; // [esp+8h] [ebp-14h] BYREF

  v3 = this->joystickInterfaces[whichJoystick]; /*0x4030fb*/
  v4[3] = 0; /*0x40310b*/
  v4[2] = 0; /*0x40310f*/
  v4[0] = 0x14; /*0x403121*/
  v4[1] = 0x10; /*0x403129*/
  v4[4] = (__int64)(deadzonePercent * 10000.0); /*0x40313b*/
  v3->vtbl->IDirectInputDevice2Impl_SetProperty(v3, 5, v4); /*0x403150*/
}
