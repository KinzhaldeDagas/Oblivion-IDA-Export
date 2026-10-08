int __thiscall OSInputGlobals::GetBufferedKeyStateChange(InputGlobal *this, DIDEVICEOBJECTDATA *a2)
{
  IDirectInputDevice8 *keyboardInterface; // eax
  bool v3; // cf
  int v5; // [esp+14h] [ebp-18h] BYREF
  DIDEVICEOBJECTDATA v6; // [esp+18h] [ebp-14h] BYREF

  if ( !this->keyboardInterface ) /*0x403c93*/
    return 0; /*0x403c93*/
  keyboardInterface = this->keyboardInterface; /*0x403c99*/
  v5 = 1; /*0x403ca8*/
  if ( keyboardInterface->vtbl->IDirectInputDevice2Impl_GetDeviceData(keyboardInterface, 0x14, &v6, (DWORD *)&v5, 0) /*0x403cc1*/
    || !v5 )
  {
    return 0; /*0x403ce0*/
  }
  v3 = SLOBYTE(v6.dwData) < 0; /*0x403cd1*/
  a2->dwOfs = v6.dwOfs; /*0x403cd3*/
  return 2 - v3; /*0x403cda*/
}
