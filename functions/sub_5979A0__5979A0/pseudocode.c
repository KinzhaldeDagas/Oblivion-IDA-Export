char __thiscall sub_5979A0(_BYTE *this, int a2, float a3)
{
  void (__thiscall *v8)(_BYTE *, int, _DWORD); // edx
  void (__thiscall *v10)(_BYTE *, int, _DWORD); // edx

  if ( InterfaceManager_MenuModeHasFocus(0x3F0) )
  {
    if ( a2 == 0xD )
    {
      if ( a3 >= 1.0 )
      {
        v8 = *(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)this + 0xC);
        this[0x56] = 1;
        v8(this, 0x2A, 0);
        return 1;
      }
    }
    else if ( a2 == 0xE && a3 >= 1.0 )
    {
      v10 = *(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)this + 0xC);
      this[0x56] = 0;
      v10(this, 0x2B, 0);
      return 1;
    }
  }
  return 0;
}
