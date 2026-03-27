int __thiscall OSInputGlobals::GetBufferedKeyStateChange(InputGlobal *this, DIDEVICEOBJECTDATA *a2)
{
  IDirectInputDevice8 *keyboardInterface; // eax
  bool v3; // cf
  int v5; // [esp+14h] [ebp-18h] BYREF
  DIDEVICEOBJECTDATA v6; // [esp+18h] [ebp-14h] BYREF

  if ( !this->keyboardInterface )
    return 0;
  keyboardInterface = this->keyboardInterface;
  v5 = 1;
  if ( keyboardInterface->vtbl->IDirectInputDevice2Impl_GetDeviceData(keyboardInterface, 0x14, &v6, (DWORD *)&v5, 0)
    || !v5 )
  {
    return 0;
  }
  v3 = SLOBYTE(v6.dwData) < 0;
  a2->dwOfs = v6.dwOfs;
  return 2 - v3;
}
