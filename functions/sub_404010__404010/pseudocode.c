void __thiscall sub_404010(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // ebx
  _DWORD *v5; // edi

  if ( a2 )
  {
    v3 = *(this + 1);
    *this |= 1u;
    (*(void (__stdcall **)(int, _DWORD, BOOL (__stdcall *)(_BYTE *, InputGlobal *), _DWORD *, int))(*(_DWORD *)v3 + 0x10))(
      v3,
      0,
      InputGlobals::InitializeJoystickProperties,
      this,
      1);
    if ( !*(this + 0x63C) )
      *this &= ~1u;
  }
  else
  {
    v4 = 0;
    if ( (int)*(this + 0x63C) > 0 )
    {
      v5 = this + 2;
      do
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 0x20))(*v5);
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5);
        ++v4;
        ++v5;
      }
      while ( v4 < *(this + 0x63C) );
    }
    *this &= ~1u;
    *(this + 0x63C) = 0;
    _memset(this + 0xC, 0, 0x500);
  }
}
