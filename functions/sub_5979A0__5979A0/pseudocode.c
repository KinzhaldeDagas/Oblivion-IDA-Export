char __thiscall sub_5979A0(_BYTE *this, int a2, float a3)
{
  void (__thiscall *v4)(_BYTE *, int, _DWORD); // edx
  void (__thiscall *v6)(_BYTE *, int, _DWORD); // edx

  if ( InterfaceManager_MenuModeHasFocus(0x3F0) ) /*0x5979a8*/
  {
    if ( a2 == 0xD ) /*0x5979bb*/
    {
      if ( a3 >= 1.0 ) /*0x5979c8*/
      {
        v4 = *(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)this + 0xC); /*0x5979cc*/
        *(this + 0x56) = 1; /*0x5979d5*/
        v4(this, 0x2A, 0); /*0x5979d9*/
        return 1; /*0x5979de*/
      }
    }
    else if ( a2 == 0xE && a3 >= 1.0 ) /*0x5979f1*/
    {
      v6 = *(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)this + 0xC); /*0x5979f5*/
      *(this + 0x56) = 0; /*0x5979fe*/
      v6(this, 0x2B, 0); /*0x597a02*/
      return 1; /*0x597a07*/
    }
  }
  return 0; /*0x5979dd*/
}
